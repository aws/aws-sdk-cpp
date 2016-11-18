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
#include <aws/devicefarm/model/ExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace ExecutionStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int PENDING_CONCURRENCY_HASH = HashingUtils::HashString("PENDING_CONCURRENCY");
        static const int PENDING_DEVICE_HASH = HashingUtils::HashString("PENDING_DEVICE");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int SCHEDULING_HASH = HashingUtils::HashString("SCHEDULING");
        static const int PREPARING_HASH = HashingUtils::HashString("PREPARING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");


        ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ExecutionStatus::PENDING;
          }
          else if (hashCode == PENDING_CONCURRENCY_HASH)
          {
            return ExecutionStatus::PENDING_CONCURRENCY;
          }
          else if (hashCode == PENDING_DEVICE_HASH)
          {
            return ExecutionStatus::PENDING_DEVICE;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return ExecutionStatus::PROCESSING;
          }
          else if (hashCode == SCHEDULING_HASH)
          {
            return ExecutionStatus::SCHEDULING;
          }
          else if (hashCode == PREPARING_HASH)
          {
            return ExecutionStatus::PREPARING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ExecutionStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ExecutionStatus::COMPLETED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ExecutionStatus::STOPPING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionStatus>(hashCode);
          }

          return ExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForExecutionStatus(ExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case ExecutionStatus::PENDING:
            return "PENDING";
          case ExecutionStatus::PENDING_CONCURRENCY:
            return "PENDING_CONCURRENCY";
          case ExecutionStatus::PENDING_DEVICE:
            return "PENDING_DEVICE";
          case ExecutionStatus::PROCESSING:
            return "PROCESSING";
          case ExecutionStatus::SCHEDULING:
            return "SCHEDULING";
          case ExecutionStatus::PREPARING:
            return "PREPARING";
          case ExecutionStatus::RUNNING:
            return "RUNNING";
          case ExecutionStatus::COMPLETED:
            return "COMPLETED";
          case ExecutionStatus::STOPPING:
            return "STOPPING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ExecutionStatusMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
