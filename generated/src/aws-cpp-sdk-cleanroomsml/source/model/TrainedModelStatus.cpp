/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelStatus.h>
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
      namespace TrainedModelStatusMapper
      {

        static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int CANCEL_PENDING_HASH = HashingUtils::HashString("CANCEL_PENDING");
        static const int CANCEL_IN_PROGRESS_HASH = HashingUtils::HashString("CANCEL_IN_PROGRESS");
        static const int CANCEL_FAILED_HASH = HashingUtils::HashString("CANCEL_FAILED");


        TrainedModelStatus GetTrainedModelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return TrainedModelStatus::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return TrainedModelStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return TrainedModelStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TrainedModelStatus::ACTIVE;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return TrainedModelStatus::DELETE_PENDING;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return TrainedModelStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return TrainedModelStatus::DELETE_FAILED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return TrainedModelStatus::INACTIVE;
          }
          else if (hashCode == CANCEL_PENDING_HASH)
          {
            return TrainedModelStatus::CANCEL_PENDING;
          }
          else if (hashCode == CANCEL_IN_PROGRESS_HASH)
          {
            return TrainedModelStatus::CANCEL_IN_PROGRESS;
          }
          else if (hashCode == CANCEL_FAILED_HASH)
          {
            return TrainedModelStatus::CANCEL_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainedModelStatus>(hashCode);
          }

          return TrainedModelStatus::NOT_SET;
        }

        Aws::String GetNameForTrainedModelStatus(TrainedModelStatus enumValue)
        {
          switch(enumValue)
          {
          case TrainedModelStatus::NOT_SET:
            return {};
          case TrainedModelStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case TrainedModelStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case TrainedModelStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case TrainedModelStatus::ACTIVE:
            return "ACTIVE";
          case TrainedModelStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case TrainedModelStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case TrainedModelStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case TrainedModelStatus::INACTIVE:
            return "INACTIVE";
          case TrainedModelStatus::CANCEL_PENDING:
            return "CANCEL_PENDING";
          case TrainedModelStatus::CANCEL_IN_PROGRESS:
            return "CANCEL_IN_PROGRESS";
          case TrainedModelStatus::CANCEL_FAILED:
            return "CANCEL_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainedModelStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
