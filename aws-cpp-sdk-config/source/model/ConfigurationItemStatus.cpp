/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/config/model/ConfigurationItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ConfigurationItemStatusMapper
      {

        static const int Ok_HASH = HashingUtils::HashString("Ok");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Discovered_HASH = HashingUtils::HashString("Discovered");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");


        ConfigurationItemStatus GetConfigurationItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ok_HASH)
          {
            return ConfigurationItemStatus::Ok;
          }
          else if (hashCode == Failed_HASH)
          {
            return ConfigurationItemStatus::Failed;
          }
          else if (hashCode == Discovered_HASH)
          {
            return ConfigurationItemStatus::Discovered;
          }
          else if (hashCode == Deleted_HASH)
          {
            return ConfigurationItemStatus::Deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationItemStatus>(hashCode);
          }

          return ConfigurationItemStatus::NOT_SET;
        }

        Aws::String GetNameForConfigurationItemStatus(ConfigurationItemStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationItemStatus::Ok:
            return "Ok";
          case ConfigurationItemStatus::Failed:
            return "Failed";
          case ConfigurationItemStatus::Discovered:
            return "Discovered";
          case ConfigurationItemStatus::Deleted:
            return "Deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ConfigurationItemStatusMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
