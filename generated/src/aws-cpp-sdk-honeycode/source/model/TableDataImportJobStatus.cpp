/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/TableDataImportJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Honeycode
  {
    namespace Model
    {
      namespace TableDataImportJobStatusMapper
      {

        static constexpr uint32_t SUBMITTED_HASH = ConstExprHashingUtils::HashString("SUBMITTED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        TableDataImportJobStatus GetTableDataImportJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return TableDataImportJobStatus::SUBMITTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return TableDataImportJobStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return TableDataImportJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TableDataImportJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableDataImportJobStatus>(hashCode);
          }

          return TableDataImportJobStatus::NOT_SET;
        }

        Aws::String GetNameForTableDataImportJobStatus(TableDataImportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case TableDataImportJobStatus::NOT_SET:
            return {};
          case TableDataImportJobStatus::SUBMITTED:
            return "SUBMITTED";
          case TableDataImportJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case TableDataImportJobStatus::COMPLETED:
            return "COMPLETED";
          case TableDataImportJobStatus::FAILED:
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

      } // namespace TableDataImportJobStatusMapper
    } // namespace Model
  } // namespace Honeycode
} // namespace Aws
