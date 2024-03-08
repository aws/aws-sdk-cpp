/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/QueryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace QueryStatusMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int FINISHED_HASH = HashingUtils::HashString("FINISHED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        QueryStatus GetQueryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return QueryStatus::QUEUED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return QueryStatus::RUNNING;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return QueryStatus::FINISHED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return QueryStatus::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return QueryStatus::CANCELLED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return QueryStatus::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryStatus>(hashCode);
          }

          return QueryStatus::NOT_SET;
        }

        Aws::String GetNameForQueryStatus(QueryStatus enumValue)
        {
          switch(enumValue)
          {
          case QueryStatus::NOT_SET:
            return {};
          case QueryStatus::QUEUED:
            return "QUEUED";
          case QueryStatus::RUNNING:
            return "RUNNING";
          case QueryStatus::FINISHED:
            return "FINISHED";
          case QueryStatus::FAILED:
            return "FAILED";
          case QueryStatus::CANCELLED:
            return "CANCELLED";
          case QueryStatus::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryStatusMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
