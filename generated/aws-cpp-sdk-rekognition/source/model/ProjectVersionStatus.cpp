/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ProjectVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace ProjectVersionStatusMapper
      {

        static const int TRAINING_IN_PROGRESS_HASH = HashingUtils::HashString("TRAINING_IN_PROGRESS");
        static const int TRAINING_COMPLETED_HASH = HashingUtils::HashString("TRAINING_COMPLETED");
        static const int TRAINING_FAILED_HASH = HashingUtils::HashString("TRAINING_FAILED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ProjectVersionStatus GetProjectVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRAINING_IN_PROGRESS_HASH)
          {
            return ProjectVersionStatus::TRAINING_IN_PROGRESS;
          }
          else if (hashCode == TRAINING_COMPLETED_HASH)
          {
            return ProjectVersionStatus::TRAINING_COMPLETED;
          }
          else if (hashCode == TRAINING_FAILED_HASH)
          {
            return ProjectVersionStatus::TRAINING_FAILED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ProjectVersionStatus::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ProjectVersionStatus::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ProjectVersionStatus::FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ProjectVersionStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ProjectVersionStatus::STOPPED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ProjectVersionStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectVersionStatus>(hashCode);
          }

          return ProjectVersionStatus::NOT_SET;
        }

        Aws::String GetNameForProjectVersionStatus(ProjectVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case ProjectVersionStatus::TRAINING_IN_PROGRESS:
            return "TRAINING_IN_PROGRESS";
          case ProjectVersionStatus::TRAINING_COMPLETED:
            return "TRAINING_COMPLETED";
          case ProjectVersionStatus::TRAINING_FAILED:
            return "TRAINING_FAILED";
          case ProjectVersionStatus::STARTING:
            return "STARTING";
          case ProjectVersionStatus::RUNNING:
            return "RUNNING";
          case ProjectVersionStatus::FAILED:
            return "FAILED";
          case ProjectVersionStatus::STOPPING:
            return "STOPPING";
          case ProjectVersionStatus::STOPPED:
            return "STOPPED";
          case ProjectVersionStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectVersionStatusMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
