/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/ExportJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BackupSearch
  {
    namespace Model
    {
      namespace ExportJobStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        ExportJobStatus GetExportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return ExportJobStatus::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExportJobStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ExportJobStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportJobStatus>(hashCode);
          }

          return ExportJobStatus::NOT_SET;
        }

        Aws::String GetNameForExportJobStatus(ExportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ExportJobStatus::NOT_SET:
            return {};
          case ExportJobStatus::RUNNING:
            return "RUNNING";
          case ExportJobStatus::FAILED:
            return "FAILED";
          case ExportJobStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportJobStatusMapper
    } // namespace Model
  } // namespace BackupSearch
} // namespace Aws
