/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t PENDING_CONCURRENCY_HASH = ConstExprHashingUtils::HashString("PENDING_CONCURRENCY");
        static constexpr uint32_t PENDING_DEVICE_HASH = ConstExprHashingUtils::HashString("PENDING_DEVICE");
        static constexpr uint32_t PROCESSING_HASH = ConstExprHashingUtils::HashString("PROCESSING");
        static constexpr uint32_t SCHEDULING_HASH = ConstExprHashingUtils::HashString("SCHEDULING");
        static constexpr uint32_t PREPARING_HASH = ConstExprHashingUtils::HashString("PREPARING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");


        ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ExecutionStatus::NOT_SET:
            return {};
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

            return {};
          }
        }

      } // namespace ExecutionStatusMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
