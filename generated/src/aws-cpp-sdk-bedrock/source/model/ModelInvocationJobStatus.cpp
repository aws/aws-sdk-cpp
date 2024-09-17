/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelInvocationJobStatus.h>
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
      namespace ModelInvocationJobStatusMapper
      {

        static const int Submitted_HASH = HashingUtils::HashString("Submitted");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int PartiallyCompleted_HASH = HashingUtils::HashString("PartiallyCompleted");
        static const int Expired_HASH = HashingUtils::HashString("Expired");
        static const int Validating_HASH = HashingUtils::HashString("Validating");
        static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");


        ModelInvocationJobStatus GetModelInvocationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Submitted_HASH)
          {
            return ModelInvocationJobStatus::Submitted;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ModelInvocationJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ModelInvocationJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ModelInvocationJobStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return ModelInvocationJobStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return ModelInvocationJobStatus::Stopped;
          }
          else if (hashCode == PartiallyCompleted_HASH)
          {
            return ModelInvocationJobStatus::PartiallyCompleted;
          }
          else if (hashCode == Expired_HASH)
          {
            return ModelInvocationJobStatus::Expired;
          }
          else if (hashCode == Validating_HASH)
          {
            return ModelInvocationJobStatus::Validating;
          }
          else if (hashCode == Scheduled_HASH)
          {
            return ModelInvocationJobStatus::Scheduled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelInvocationJobStatus>(hashCode);
          }

          return ModelInvocationJobStatus::NOT_SET;
        }

        Aws::String GetNameForModelInvocationJobStatus(ModelInvocationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelInvocationJobStatus::NOT_SET:
            return {};
          case ModelInvocationJobStatus::Submitted:
            return "Submitted";
          case ModelInvocationJobStatus::InProgress:
            return "InProgress";
          case ModelInvocationJobStatus::Completed:
            return "Completed";
          case ModelInvocationJobStatus::Failed:
            return "Failed";
          case ModelInvocationJobStatus::Stopping:
            return "Stopping";
          case ModelInvocationJobStatus::Stopped:
            return "Stopped";
          case ModelInvocationJobStatus::PartiallyCompleted:
            return "PartiallyCompleted";
          case ModelInvocationJobStatus::Expired:
            return "Expired";
          case ModelInvocationJobStatus::Validating:
            return "Validating";
          case ModelInvocationJobStatus::Scheduled:
            return "Scheduled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelInvocationJobStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
