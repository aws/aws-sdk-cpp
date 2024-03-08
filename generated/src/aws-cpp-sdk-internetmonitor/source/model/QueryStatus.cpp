/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/QueryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace InternetMonitor
  {
    namespace Model
    {
      namespace QueryStatusMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


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
          else if (hashCode == SUCCEEDED_HASH)
          {
            return QueryStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return QueryStatus::FAILED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return QueryStatus::CANCELED;
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
          case QueryStatus::SUCCEEDED:
            return "SUCCEEDED";
          case QueryStatus::FAILED:
            return "FAILED";
          case QueryStatus::CANCELED:
            return "CANCELED";
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
  } // namespace InternetMonitor
} // namespace Aws
