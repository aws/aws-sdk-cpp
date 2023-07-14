/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace HyperParameterTuningJobStatusMapper
      {

        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");


        HyperParameterTuningJobStatus GetHyperParameterTuningJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Completed_HASH)
          {
            return HyperParameterTuningJobStatus::Completed;
          }
          else if (hashCode == InProgress_HASH)
          {
            return HyperParameterTuningJobStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return HyperParameterTuningJobStatus::Failed;
          }
          else if (hashCode == Stopped_HASH)
          {
            return HyperParameterTuningJobStatus::Stopped;
          }
          else if (hashCode == Stopping_HASH)
          {
            return HyperParameterTuningJobStatus::Stopping;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterTuningJobStatus>(hashCode);
          }

          return HyperParameterTuningJobStatus::NOT_SET;
        }

        Aws::String GetNameForHyperParameterTuningJobStatus(HyperParameterTuningJobStatus enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterTuningJobStatus::Completed:
            return "Completed";
          case HyperParameterTuningJobStatus::InProgress:
            return "InProgress";
          case HyperParameterTuningJobStatus::Failed:
            return "Failed";
          case HyperParameterTuningJobStatus::Stopped:
            return "Stopped";
          case HyperParameterTuningJobStatus::Stopping:
            return "Stopping";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperParameterTuningJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
