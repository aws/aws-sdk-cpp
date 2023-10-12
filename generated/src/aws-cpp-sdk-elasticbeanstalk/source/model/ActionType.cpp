/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t InstanceRefresh_HASH = ConstExprHashingUtils::HashString("InstanceRefresh");
        static constexpr uint32_t PlatformUpdate_HASH = ConstExprHashingUtils::HashString("PlatformUpdate");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ActionType::NOT_SET:
            return {};
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

            return {};
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
