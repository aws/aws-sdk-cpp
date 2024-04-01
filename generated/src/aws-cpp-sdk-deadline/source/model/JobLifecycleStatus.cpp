/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobLifecycleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace JobLifecycleStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int UPLOAD_IN_PROGRESS_HASH = HashingUtils::HashString("UPLOAD_IN_PROGRESS");
        static const int UPLOAD_FAILED_HASH = HashingUtils::HashString("UPLOAD_FAILED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int UPDATE_SUCCEEDED_HASH = HashingUtils::HashString("UPDATE_SUCCEEDED");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        JobLifecycleStatus GetJobLifecycleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return JobLifecycleStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return JobLifecycleStatus::CREATE_FAILED;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return JobLifecycleStatus::CREATE_COMPLETE;
          }
          else if (hashCode == UPLOAD_IN_PROGRESS_HASH)
          {
            return JobLifecycleStatus::UPLOAD_IN_PROGRESS;
          }
          else if (hashCode == UPLOAD_FAILED_HASH)
          {
            return JobLifecycleStatus::UPLOAD_FAILED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return JobLifecycleStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return JobLifecycleStatus::UPDATE_FAILED;
          }
          else if (hashCode == UPDATE_SUCCEEDED_HASH)
          {
            return JobLifecycleStatus::UPDATE_SUCCEEDED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return JobLifecycleStatus::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobLifecycleStatus>(hashCode);
          }

          return JobLifecycleStatus::NOT_SET;
        }

        Aws::String GetNameForJobLifecycleStatus(JobLifecycleStatus enumValue)
        {
          switch(enumValue)
          {
          case JobLifecycleStatus::NOT_SET:
            return {};
          case JobLifecycleStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case JobLifecycleStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case JobLifecycleStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case JobLifecycleStatus::UPLOAD_IN_PROGRESS:
            return "UPLOAD_IN_PROGRESS";
          case JobLifecycleStatus::UPLOAD_FAILED:
            return "UPLOAD_FAILED";
          case JobLifecycleStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case JobLifecycleStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case JobLifecycleStatus::UPDATE_SUCCEEDED:
            return "UPDATE_SUCCEEDED";
          case JobLifecycleStatus::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobLifecycleStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
