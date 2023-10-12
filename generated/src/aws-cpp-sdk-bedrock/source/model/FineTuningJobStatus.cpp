/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/FineTuningJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace FineTuningJobStatusMapper
      {

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        FineTuningJobStatus GetFineTuningJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return FineTuningJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return FineTuningJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return FineTuningJobStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return FineTuningJobStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return FineTuningJobStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FineTuningJobStatus>(hashCode);
          }

          return FineTuningJobStatus::NOT_SET;
        }

        Aws::String GetNameForFineTuningJobStatus(FineTuningJobStatus enumValue)
        {
          switch(enumValue)
          {
          case FineTuningJobStatus::NOT_SET:
            return {};
          case FineTuningJobStatus::InProgress:
            return "InProgress";
          case FineTuningJobStatus::Completed:
            return "Completed";
          case FineTuningJobStatus::Failed:
            return "Failed";
          case FineTuningJobStatus::Stopping:
            return "Stopping";
          case FineTuningJobStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FineTuningJobStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
