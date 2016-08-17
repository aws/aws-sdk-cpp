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
#include <aws/elasticbeanstalk/model/ActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace ActionTypeMapper
      {

        static const int InstanceRefresh_HASH = HashingUtils::HashString("InstanceRefresh");
        static const int PlatformUpdate_HASH = HashingUtils::HashString("PlatformUpdate");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceRefresh_HASH)
          {
            return ActionType::InstanceRefresh;
          }
          else if (hashCode == PlatformUpdate_HASH)
          {
            return ActionType::PlatformUpdate;
          }
          else if (hashCode == Unknown_HASH)
          {
            return ActionType::Unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionType>(hashCode);
          }

          return ActionType::NOT_SET;
        }

        Aws::String GetNameForActionType(ActionType enumValue)
        {
          switch(enumValue)
          {
          case ActionType::InstanceRefresh:
            return "InstanceRefresh";
          case ActionType::PlatformUpdate:
            return "PlatformUpdate";
          case ActionType::Unknown:
            return "Unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
