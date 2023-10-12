/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TieringOperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace TieringOperationStatusMapper
      {

        static constexpr uint32_t archival_in_progress_HASH = ConstExprHashingUtils::HashString("archival-in-progress");
        static constexpr uint32_t archival_completed_HASH = ConstExprHashingUtils::HashString("archival-completed");
        static constexpr uint32_t archival_failed_HASH = ConstExprHashingUtils::HashString("archival-failed");
        static constexpr uint32_t temporary_restore_in_progress_HASH = ConstExprHashingUtils::HashString("temporary-restore-in-progress");
        static constexpr uint32_t temporary_restore_completed_HASH = ConstExprHashingUtils::HashString("temporary-restore-completed");
        static constexpr uint32_t temporary_restore_failed_HASH = ConstExprHashingUtils::HashString("temporary-restore-failed");
        static constexpr uint32_t permanent_restore_in_progress_HASH = ConstExprHashingUtils::HashString("permanent-restore-in-progress");
        static constexpr uint32_t permanent_restore_completed_HASH = ConstExprHashingUtils::HashString("permanent-restore-completed");
        static constexpr uint32_t permanent_restore_failed_HASH = ConstExprHashingUtils::HashString("permanent-restore-failed");


        TieringOperationStatus GetTieringOperationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == archival_in_progress_HASH)
          {
            return TieringOperationStatus::archival_in_progress;
          }
          else if (hashCode == archival_completed_HASH)
          {
            return TieringOperationStatus::archival_completed;
          }
          else if (hashCode == archival_failed_HASH)
          {
            return TieringOperationStatus::archival_failed;
          }
          else if (hashCode == temporary_restore_in_progress_HASH)
          {
            return TieringOperationStatus::temporary_restore_in_progress;
          }
          else if (hashCode == temporary_restore_completed_HASH)
          {
            return TieringOperationStatus::temporary_restore_completed;
          }
          else if (hashCode == temporary_restore_failed_HASH)
          {
            return TieringOperationStatus::temporary_restore_failed;
          }
          else if (hashCode == permanent_restore_in_progress_HASH)
          {
            return TieringOperationStatus::permanent_restore_in_progress;
          }
          else if (hashCode == permanent_restore_completed_HASH)
          {
            return TieringOperationStatus::permanent_restore_completed;
          }
          else if (hashCode == permanent_restore_failed_HASH)
          {
            return TieringOperationStatus::permanent_restore_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TieringOperationStatus>(hashCode);
          }

          return TieringOperationStatus::NOT_SET;
        }

        Aws::String GetNameForTieringOperationStatus(TieringOperationStatus enumValue)
        {
          switch(enumValue)
          {
          case TieringOperationStatus::NOT_SET:
            return {};
          case TieringOperationStatus::archival_in_progress:
            return "archival-in-progress";
          case TieringOperationStatus::archival_completed:
            return "archival-completed";
          case TieringOperationStatus::archival_failed:
            return "archival-failed";
          case TieringOperationStatus::temporary_restore_in_progress:
            return "temporary-restore-in-progress";
          case TieringOperationStatus::temporary_restore_completed:
            return "temporary-restore-completed";
          case TieringOperationStatus::temporary_restore_failed:
            return "temporary-restore-failed";
          case TieringOperationStatus::permanent_restore_in_progress:
            return "permanent-restore-in-progress";
          case TieringOperationStatus::permanent_restore_completed:
            return "permanent-restore-completed";
          case TieringOperationStatus::permanent_restore_failed:
            return "permanent-restore-failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TieringOperationStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
