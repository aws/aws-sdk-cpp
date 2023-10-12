/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/BatchJobExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MainframeModernization
  {
    namespace Model
    {
      namespace BatchJobExecutionStatusMapper
      {

        static constexpr uint32_t Submitting_HASH = ConstExprHashingUtils::HashString("Submitting");
        static constexpr uint32_t Holding_HASH = ConstExprHashingUtils::HashString("Holding");
        static constexpr uint32_t Dispatching_HASH = ConstExprHashingUtils::HashString("Dispatching");
        static constexpr uint32_t Running_HASH = ConstExprHashingUtils::HashString("Running");
        static constexpr uint32_t Cancelling_HASH = ConstExprHashingUtils::HashString("Cancelling");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Succeeded_With_Warning_HASH = ConstExprHashingUtils::HashString("Succeeded With Warning");


        BatchJobExecutionStatus GetBatchJobExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Submitting_HASH)
          {
            return BatchJobExecutionStatus::Submitting;
          }
          else if (hashCode == Holding_HASH)
          {
            return BatchJobExecutionStatus::Holding;
          }
          else if (hashCode == Dispatching_HASH)
          {
            return BatchJobExecutionStatus::Dispatching;
          }
          else if (hashCode == Running_HASH)
          {
            return BatchJobExecutionStatus::Running;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return BatchJobExecutionStatus::Cancelling;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return BatchJobExecutionStatus::Cancelled;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return BatchJobExecutionStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return BatchJobExecutionStatus::Failed;
          }
          else if (hashCode == Succeeded_With_Warning_HASH)
          {
            return BatchJobExecutionStatus::Succeeded_With_Warning;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchJobExecutionStatus>(hashCode);
          }

          return BatchJobExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForBatchJobExecutionStatus(BatchJobExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case BatchJobExecutionStatus::NOT_SET:
            return {};
          case BatchJobExecutionStatus::Submitting:
            return "Submitting";
          case BatchJobExecutionStatus::Holding:
            return "Holding";
          case BatchJobExecutionStatus::Dispatching:
            return "Dispatching";
          case BatchJobExecutionStatus::Running:
            return "Running";
          case BatchJobExecutionStatus::Cancelling:
            return "Cancelling";
          case BatchJobExecutionStatus::Cancelled:
            return "Cancelled";
          case BatchJobExecutionStatus::Succeeded:
            return "Succeeded";
          case BatchJobExecutionStatus::Failed:
            return "Failed";
          case BatchJobExecutionStatus::Succeeded_With_Warning:
            return "Succeeded With Warning";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchJobExecutionStatusMapper
    } // namespace Model
  } // namespace MainframeModernization
} // namespace Aws
