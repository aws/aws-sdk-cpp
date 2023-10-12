/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/QuantumTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace QuantumTaskStatusMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        QuantumTaskStatus GetQuantumTaskStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return QuantumTaskStatus::CREATED;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return QuantumTaskStatus::QUEUED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return QuantumTaskStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return QuantumTaskStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return QuantumTaskStatus::FAILED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return QuantumTaskStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return QuantumTaskStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuantumTaskStatus>(hashCode);
          }

          return QuantumTaskStatus::NOT_SET;
        }

        Aws::String GetNameForQuantumTaskStatus(QuantumTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case QuantumTaskStatus::NOT_SET:
            return {};
          case QuantumTaskStatus::CREATED:
            return "CREATED";
          case QuantumTaskStatus::QUEUED:
            return "QUEUED";
          case QuantumTaskStatus::RUNNING:
            return "RUNNING";
          case QuantumTaskStatus::COMPLETED:
            return "COMPLETED";
          case QuantumTaskStatus::FAILED:
            return "FAILED";
          case QuantumTaskStatus::CANCELLING:
            return "CANCELLING";
          case QuantumTaskStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuantumTaskStatusMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
