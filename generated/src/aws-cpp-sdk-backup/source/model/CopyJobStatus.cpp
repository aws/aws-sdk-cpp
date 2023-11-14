/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CopyJobStatus.h>
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
      namespace CopyJobStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int ABORTING_HASH = HashingUtils::HashString("ABORTING");
        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");
        static const int COMPLETING_HASH = HashingUtils::HashString("COMPLETING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILING_HASH = HashingUtils::HashString("FAILING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");
        static const int AGGREGATE_ALL_HASH = HashingUtils::HashString("AGGREGATE_ALL");
        static const int ANY_HASH = HashingUtils::HashString("ANY");


        CopyJobStatus GetCopyJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return CopyJobStatus::CREATED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return CopyJobStatus::RUNNING;
          }
          else if (hashCode == ABORTING_HASH)
          {
            return CopyJobStatus::ABORTING;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return CopyJobStatus::ABORTED;
          }
          else if (hashCode == COMPLETING_HASH)
          {
            return CopyJobStatus::COMPLETING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CopyJobStatus::COMPLETED;
          }
          else if (hashCode == FAILING_HASH)
          {
            return CopyJobStatus::FAILING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CopyJobStatus::FAILED;
          }
          else if (hashCode == PARTIAL_HASH)
          {
            return CopyJobStatus::PARTIAL;
          }
          else if (hashCode == AGGREGATE_ALL_HASH)
          {
            return CopyJobStatus::AGGREGATE_ALL;
          }
          else if (hashCode == ANY_HASH)
          {
            return CopyJobStatus::ANY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CopyJobStatus>(hashCode);
          }

          return CopyJobStatus::NOT_SET;
        }

        Aws::String GetNameForCopyJobStatus(CopyJobStatus enumValue)
        {
          switch(enumValue)
          {
          case CopyJobStatus::NOT_SET:
            return {};
          case CopyJobStatus::CREATED:
            return "CREATED";
          case CopyJobStatus::RUNNING:
            return "RUNNING";
          case CopyJobStatus::ABORTING:
            return "ABORTING";
          case CopyJobStatus::ABORTED:
            return "ABORTED";
          case CopyJobStatus::COMPLETING:
            return "COMPLETING";
          case CopyJobStatus::COMPLETED:
            return "COMPLETED";
          case CopyJobStatus::FAILING:
            return "FAILING";
          case CopyJobStatus::FAILED:
            return "FAILED";
          case CopyJobStatus::PARTIAL:
            return "PARTIAL";
          case CopyJobStatus::AGGREGATE_ALL:
            return "AGGREGATE_ALL";
          case CopyJobStatus::ANY:
            return "ANY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CopyJobStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
