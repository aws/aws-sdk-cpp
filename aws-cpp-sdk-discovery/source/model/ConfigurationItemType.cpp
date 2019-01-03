/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/discovery/model/ConfigurationItemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace ConfigurationItemTypeMapper
      {

        static const int SERVER_HASH = HashingUtils::HashString("SERVER");
        static const int PROCESS_HASH = HashingUtils::HashString("PROCESS");
        static const int CONNECTION_HASH = HashingUtils::HashString("CONNECTION");
        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");


        ConfigurationItemType GetConfigurationItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVER_HASH)
          {
            return ConfigurationItemType::SERVER;
          }
          else if (hashCode == PROCESS_HASH)
          {
            return ConfigurationItemType::PROCESS;
          }
          else if (hashCode == CONNECTION_HASH)
          {
            return ConfigurationItemType::CONNECTION;
          }
          else if (hashCode == APPLICATION_HASH)
          {
            return ConfigurationItemType::APPLICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationItemType>(hashCode);
          }

          return ConfigurationItemType::NOT_SET;
        }

        Aws::String GetNameForConfigurationItemType(ConfigurationItemType enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationItemType::SERVER:
            return "SERVER";
          case ConfigurationItemType::PROCESS:
            return "PROCESS";
          case ConfigurationItemType::CONNECTION:
            return "CONNECTION";
          case ConfigurationItemType::APPLICATION:
            return "APPLICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationItemTypeMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
