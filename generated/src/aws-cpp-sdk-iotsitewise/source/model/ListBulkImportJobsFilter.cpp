/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListBulkImportJobsFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace ListBulkImportJobsFilterMapper
      {

        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t COMPLETED_WITH_FAILURES_HASH = ConstExprHashingUtils::HashString("COMPLETED_WITH_FAILURES");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");


        ListBulkImportJobsFilter GetListBulkImportJobsFilterForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ListBulkImportJobsFilter::ALL;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ListBulkImportJobsFilter::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ListBulkImportJobsFilter::RUNNING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ListBulkImportJobsFilter::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ListBulkImportJobsFilter::FAILED;
          }
          else if (hashCode == COMPLETED_WITH_FAILURES_HASH)
          {
            return ListBulkImportJobsFilter::COMPLETED_WITH_FAILURES;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ListBulkImportJobsFilter::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListBulkImportJobsFilter>(hashCode);
          }

          return ListBulkImportJobsFilter::NOT_SET;
        }

        Aws::String GetNameForListBulkImportJobsFilter(ListBulkImportJobsFilter enumValue)
        {
          switch(enumValue)
          {
          case ListBulkImportJobsFilter::NOT_SET:
            return {};
          case ListBulkImportJobsFilter::ALL:
            return "ALL";
          case ListBulkImportJobsFilter::PENDING:
            return "PENDING";
          case ListBulkImportJobsFilter::RUNNING:
            return "RUNNING";
          case ListBulkImportJobsFilter::CANCELLED:
            return "CANCELLED";
          case ListBulkImportJobsFilter::FAILED:
            return "FAILED";
          case ListBulkImportJobsFilter::COMPLETED_WITH_FAILURES:
            return "COMPLETED_WITH_FAILURES";
          case ListBulkImportJobsFilter::COMPLETED:
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

      } // namespace ListBulkImportJobsFilterMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
