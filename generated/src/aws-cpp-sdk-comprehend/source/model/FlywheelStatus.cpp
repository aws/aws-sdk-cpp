/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/FlywheelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace FlywheelStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        FlywheelStatus GetFlywheelStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return FlywheelStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return FlywheelStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return FlywheelStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FlywheelStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return FlywheelStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlywheelStatus>(hashCode);
          }

          return FlywheelStatus::NOT_SET;
        }

        Aws::String GetNameForFlywheelStatus(FlywheelStatus enumValue)
        {
          switch(enumValue)
          {
          case FlywheelStatus::NOT_SET:
            return {};
          case FlywheelStatus::CREATING:
            return "CREATING";
          case FlywheelStatus::ACTIVE:
            return "ACTIVE";
          case FlywheelStatus::UPDATING:
            return "UPDATING";
          case FlywheelStatus::DELETING:
            return "DELETING";
          case FlywheelStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlywheelStatusMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
