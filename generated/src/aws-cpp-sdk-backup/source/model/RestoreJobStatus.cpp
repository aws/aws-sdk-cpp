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

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t ABORTED_HASH = ConstExprHashingUtils::HashString("ABORTED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        RestoreJobStatus GetRestoreJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RestoreJobStatus::NOT_SET:
            return {};
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
