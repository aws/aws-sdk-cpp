/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/InstanceRefreshStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace InstanceRefreshStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Successful_HASH = ConstExprHashingUtils::HashString("Successful");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Cancelling_HASH = ConstExprHashingUtils::HashString("Cancelling");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t RollbackInProgress_HASH = ConstExprHashingUtils::HashString("RollbackInProgress");
        static constexpr uint32_t RollbackFailed_HASH = ConstExprHashingUtils::HashString("RollbackFailed");
        static constexpr uint32_t RollbackSuccessful_HASH = ConstExprHashingUtils::HashString("RollbackSuccessful");


        InstanceRefreshStatus GetInstanceRefreshStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return InstanceRefreshStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return InstanceRefreshStatus::InProgress;
          }
          else if (hashCode == Successful_HASH)
          {
            return InstanceRefreshStatus::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return InstanceRefreshStatus::Failed;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return InstanceRefreshStatus::Cancelling;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return InstanceRefreshStatus::Cancelled;
          }
          else if (hashCode == RollbackInProgress_HASH)
          {
            return InstanceRefreshStatus::RollbackInProgress;
          }
          else if (hashCode == RollbackFailed_HASH)
          {
            return InstanceRefreshStatus::RollbackFailed;
          }
          else if (hashCode == RollbackSuccessful_HASH)
          {
            return InstanceRefreshStatus::RollbackSuccessful;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceRefreshStatus>(hashCode);
          }

          return InstanceRefreshStatus::NOT_SET;
        }

        Aws::String GetNameForInstanceRefreshStatus(InstanceRefreshStatus enumValue)
        {
          switch(enumValue)
          {
          case InstanceRefreshStatus::NOT_SET:
            return {};
          case InstanceRefreshStatus::Pending:
            return "Pending";
          case InstanceRefreshStatus::InProgress:
            return "InProgress";
          case InstanceRefreshStatus::Successful:
            return "Successful";
          case InstanceRefreshStatus::Failed:
            return "Failed";
          case InstanceRefreshStatus::Cancelling:
            return "Cancelling";
          case InstanceRefreshStatus::Cancelled:
            return "Cancelled";
          case InstanceRefreshStatus::RollbackInProgress:
            return "RollbackInProgress";
          case InstanceRefreshStatus::RollbackFailed:
            return "RollbackFailed";
          case InstanceRefreshStatus::RollbackSuccessful:
            return "RollbackSuccessful";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceRefreshStatusMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
