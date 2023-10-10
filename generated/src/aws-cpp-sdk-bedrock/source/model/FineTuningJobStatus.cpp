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

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");


        FineTuningJobStatus GetFineTuningJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
