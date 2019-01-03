/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/logs/model/QueryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace QueryStatusMapper
      {

        static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Complete_HASH = HashingUtils::HashString("Complete");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");


        QueryStatus GetQueryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Scheduled_HASH)
          {
            return QueryStatus::Scheduled;
          }
          else if (hashCode == Running_HASH)
          {
            return QueryStatus::Running;
          }
          else if (hashCode == Complete_HASH)
          {
            return QueryStatus::Complete;
          }
          else if (hashCode == Failed_HASH)
          {
            return QueryStatus::Failed;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return QueryStatus::Cancelled;
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
          case QueryStatus::Scheduled:
            return "Scheduled";
          case QueryStatus::Running:
            return "Running";
          case QueryStatus::Complete:
            return "Complete";
          case QueryStatus::Failed:
            return "Failed";
          case QueryStatus::Cancelled:
            return "Cancelled";
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
  } // namespace CloudWatchLogs
} // namespace Aws
