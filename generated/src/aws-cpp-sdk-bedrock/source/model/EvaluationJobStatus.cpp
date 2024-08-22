/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationJobStatus.h>
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
      namespace EvaluationJobStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        EvaluationJobStatus GetEvaluationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return EvaluationJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return EvaluationJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return EvaluationJobStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return EvaluationJobStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return EvaluationJobStatus::Stopped;
          }
          else if (hashCode == Deleting_HASH)
          {
            return EvaluationJobStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationJobStatus>(hashCode);
          }

          return EvaluationJobStatus::NOT_SET;
        }

        Aws::String GetNameForEvaluationJobStatus(EvaluationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case EvaluationJobStatus::NOT_SET:
            return {};
          case EvaluationJobStatus::InProgress:
            return "InProgress";
          case EvaluationJobStatus::Completed:
            return "Completed";
          case EvaluationJobStatus::Failed:
            return "Failed";
          case EvaluationJobStatus::Stopping:
            return "Stopping";
          case EvaluationJobStatus::Stopped:
            return "Stopped";
          case EvaluationJobStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationJobStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
