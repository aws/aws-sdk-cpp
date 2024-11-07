/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelExportJobStatus.h>
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
      namespace TrainedModelExportJobStatusMapper
      {

        static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        TrainedModelExportJobStatus GetTrainedModelExportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return TrainedModelExportJobStatus::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return TrainedModelExportJobStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return TrainedModelExportJobStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TrainedModelExportJobStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainedModelExportJobStatus>(hashCode);
          }

          return TrainedModelExportJobStatus::NOT_SET;
        }

        Aws::String GetNameForTrainedModelExportJobStatus(TrainedModelExportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case TrainedModelExportJobStatus::NOT_SET:
            return {};
          case TrainedModelExportJobStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case TrainedModelExportJobStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case TrainedModelExportJobStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case TrainedModelExportJobStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainedModelExportJobStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
