/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace RestoreJobStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RestoreJobStatus GetRestoreJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return RestoreJobStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return RestoreJobStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return RestoreJobStatus::COMPLETED;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return RestoreJobStatus::ABORTED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RestoreJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RestoreJobStatus>(hashCode);
          }

          return RestoreJobStatus::NOT_SET;
        }

        Aws::String GetNameForRestoreJobStatus(RestoreJobStatus enumValue)
        {
          switch(enumValue)
          {
          case RestoreJobStatus::PENDING:
            return "PENDING";
          case RestoreJobStatus::RUNNING:
            return "RUNNING";
          case RestoreJobStatus::COMPLETED:
            return "COMPLETED";
          case RestoreJobStatus::ABORTED:
            return "ABORTED";
          case RestoreJobStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RestoreJobStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
