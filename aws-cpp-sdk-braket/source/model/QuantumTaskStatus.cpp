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

        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");


        QuantumTaskStatus GetQuantumTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANCELLED_HASH)
          {
            return QuantumTaskStatus::CANCELLED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return QuantumTaskStatus::CANCELLING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return QuantumTaskStatus::COMPLETED;
          }
          else if (hashCode == CREATED_HASH)
          {
            return QuantumTaskStatus::CREATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return QuantumTaskStatus::FAILED;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return QuantumTaskStatus::QUEUED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return QuantumTaskStatus::RUNNING;
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
          case QuantumTaskStatus::CANCELLED:
            return "CANCELLED";
          case QuantumTaskStatus::CANCELLING:
            return "CANCELLING";
          case QuantumTaskStatus::COMPLETED:
            return "COMPLETED";
          case QuantumTaskStatus::CREATED:
            return "CREATED";
          case QuantumTaskStatus::FAILED:
            return "FAILED";
          case QuantumTaskStatus::QUEUED:
            return "QUEUED";
          case QuantumTaskStatus::RUNNING:
            return "RUNNING";
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
