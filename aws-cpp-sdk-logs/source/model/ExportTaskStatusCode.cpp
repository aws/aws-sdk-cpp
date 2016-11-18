/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/logs/model/ExportTaskStatusCode.h>
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
      namespace ExportTaskStatusCodeMapper
      {

        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int PENDING_CANCEL_HASH = HashingUtils::HashString("PENDING_CANCEL");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");


        ExportTaskStatusCode GetExportTaskStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANCELLED_HASH)
          {
            return ExportTaskStatusCode::CANCELLED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ExportTaskStatusCode::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExportTaskStatusCode::FAILED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ExportTaskStatusCode::PENDING;
          }
          else if (hashCode == PENDING_CANCEL_HASH)
          {
            return ExportTaskStatusCode::PENDING_CANCEL;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ExportTaskStatusCode::RUNNING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportTaskStatusCode>(hashCode);
          }

          return ExportTaskStatusCode::NOT_SET;
        }

        Aws::String GetNameForExportTaskStatusCode(ExportTaskStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ExportTaskStatusCode::CANCELLED:
            return "CANCELLED";
          case ExportTaskStatusCode::COMPLETED:
            return "COMPLETED";
          case ExportTaskStatusCode::FAILED:
            return "FAILED";
          case ExportTaskStatusCode::PENDING:
            return "PENDING";
          case ExportTaskStatusCode::PENDING_CANCEL:
            return "PENDING_CANCEL";
          case ExportTaskStatusCode::RUNNING:
            return "RUNNING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ExportTaskStatusCodeMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
