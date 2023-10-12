/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/TargetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarNotifications
  {
    namespace Model
    {
      namespace TargetStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UNREACHABLE_HASH = ConstExprHashingUtils::HashString("UNREACHABLE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t DEACTIVATED_HASH = ConstExprHashingUtils::HashString("DEACTIVATED");


        TargetStatus GetTargetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return TargetStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TargetStatus::ACTIVE;
          }
          else if (hashCode == UNREACHABLE_HASH)
          {
            return TargetStatus::UNREACHABLE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return TargetStatus::INACTIVE;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return TargetStatus::DEACTIVATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetStatus>(hashCode);
          }

          return TargetStatus::NOT_SET;
        }

        Aws::String GetNameForTargetStatus(TargetStatus enumValue)
        {
          switch(enumValue)
          {
          case TargetStatus::NOT_SET:
            return {};
          case TargetStatus::PENDING:
            return "PENDING";
          case TargetStatus::ACTIVE:
            return "ACTIVE";
          case TargetStatus::UNREACHABLE:
            return "UNREACHABLE";
          case TargetStatus::INACTIVE:
            return "INACTIVE";
          case TargetStatus::DEACTIVATED:
            return "DEACTIVATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetStatusMapper
    } // namespace Model
  } // namespace CodeStarNotifications
} // namespace Aws
