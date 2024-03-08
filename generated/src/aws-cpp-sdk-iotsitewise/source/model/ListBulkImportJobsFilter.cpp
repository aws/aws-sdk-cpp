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

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_WITH_FAILURES_HASH = HashingUtils::HashString("COMPLETED_WITH_FAILURES");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        ListBulkImportJobsFilter GetListBulkImportJobsFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
