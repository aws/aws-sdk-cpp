/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelInferenceJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace TrainedModelInferenceJobStatusMapper
      {

        static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CANCEL_PENDING_HASH = HashingUtils::HashString("CANCEL_PENDING");
        static const int CANCEL_IN_PROGRESS_HASH = HashingUtils::HashString("CANCEL_IN_PROGRESS");
        static const int CANCEL_FAILED_HASH = HashingUtils::HashString("CANCEL_FAILED");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        TrainedModelInferenceJobStatus GetTrainedModelInferenceJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return TrainedModelInferenceJobStatus::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return TrainedModelInferenceJobStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return TrainedModelInferenceJobStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TrainedModelInferenceJobStatus::ACTIVE;
          }
          else if (hashCode == CANCEL_PENDING_HASH)
          {
            return TrainedModelInferenceJobStatus::CANCEL_PENDING;
          }
          else if (hashCode == CANCEL_IN_PROGRESS_HASH)
          {
            return TrainedModelInferenceJobStatus::CANCEL_IN_PROGRESS;
          }
          else if (hashCode == CANCEL_FAILED_HASH)
          {
            return TrainedModelInferenceJobStatus::CANCEL_FAILED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return TrainedModelInferenceJobStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainedModelInferenceJobStatus>(hashCode);
          }

          return TrainedModelInferenceJobStatus::NOT_SET;
        }

        Aws::String GetNameForTrainedModelInferenceJobStatus(TrainedModelInferenceJobStatus enumValue)
        {
          switch(enumValue)
          {
          case TrainedModelInferenceJobStatus::NOT_SET:
            return {};
          case TrainedModelInferenceJobStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case TrainedModelInferenceJobStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case TrainedModelInferenceJobStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case TrainedModelInferenceJobStatus::ACTIVE:
            return "ACTIVE";
          case TrainedModelInferenceJobStatus::CANCEL_PENDING:
            return "CANCEL_PENDING";
          case TrainedModelInferenceJobStatus::CANCEL_IN_PROGRESS:
            return "CANCEL_IN_PROGRESS";
          case TrainedModelInferenceJobStatus::CANCEL_FAILED:
            return "CANCEL_FAILED";
          case TrainedModelInferenceJobStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainedModelInferenceJobStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
