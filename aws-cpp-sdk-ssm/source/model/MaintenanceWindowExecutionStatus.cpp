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

#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace MaintenanceWindowExecutionStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int SKIPPED_OVERLAPPING_HASH = HashingUtils::HashString("SKIPPED_OVERLAPPING");


        MaintenanceWindowExecutionStatus GetMaintenanceWindowExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return MaintenanceWindowExecutionStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return MaintenanceWindowExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return MaintenanceWindowExecutionStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MaintenanceWindowExecutionStatus::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return MaintenanceWindowExecutionStatus::TIMED_OUT;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return MaintenanceWindowExecutionStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return MaintenanceWindowExecutionStatus::CANCELLED;
          }
          else if (hashCode == SKIPPED_OVERLAPPING_HASH)
          {
            return MaintenanceWindowExecutionStatus::SKIPPED_OVERLAPPING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceWindowExecutionStatus>(hashCode);
          }

          return MaintenanceWindowExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForMaintenanceWindowExecutionStatus(MaintenanceWindowExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceWindowExecutionStatus::PENDING:
            return "PENDING";
          case MaintenanceWindowExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case MaintenanceWindowExecutionStatus::SUCCESS:
            return "SUCCESS";
          case MaintenanceWindowExecutionStatus::FAILED:
            return "FAILED";
          case MaintenanceWindowExecutionStatus::TIMED_OUT:
            return "TIMED_OUT";
          case MaintenanceWindowExecutionStatus::CANCELLING:
            return "CANCELLING";
          case MaintenanceWindowExecutionStatus::CANCELLED:
            return "CANCELLED";
          case MaintenanceWindowExecutionStatus::SKIPPED_OVERLAPPING:
            return "SKIPPED_OVERLAPPING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MaintenanceWindowExecutionStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
