/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/JobEventType.h>
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
      namespace JobEventTypeMapper
      {

        static constexpr uint32_t WAITING_FOR_PRIORITY_HASH = ConstExprHashingUtils::HashString("WAITING_FOR_PRIORITY");
        static constexpr uint32_t QUEUED_FOR_EXECUTION_HASH = ConstExprHashingUtils::HashString("QUEUED_FOR_EXECUTION");
        static constexpr uint32_t STARTING_INSTANCE_HASH = ConstExprHashingUtils::HashString("STARTING_INSTANCE");
        static constexpr uint32_t DOWNLOADING_DATA_HASH = ConstExprHashingUtils::HashString("DOWNLOADING_DATA");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t DEPRIORITIZED_DUE_TO_INACTIVITY_HASH = ConstExprHashingUtils::HashString("DEPRIORITIZED_DUE_TO_INACTIVITY");
        static constexpr uint32_t UPLOADING_RESULTS_HASH = ConstExprHashingUtils::HashString("UPLOADING_RESULTS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t MAX_RUNTIME_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MAX_RUNTIME_EXCEEDED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        JobEventType GetJobEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WAITING_FOR_PRIORITY_HASH)
          {
            return JobEventType::WAITING_FOR_PRIORITY;
          }
          else if (hashCode == QUEUED_FOR_EXECUTION_HASH)
          {
            return JobEventType::QUEUED_FOR_EXECUTION;
          }
          else if (hashCode == STARTING_INSTANCE_HASH)
          {
            return JobEventType::STARTING_INSTANCE;
          }
          else if (hashCode == DOWNLOADING_DATA_HASH)
          {
            return JobEventType::DOWNLOADING_DATA;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return JobEventType::RUNNING;
          }
          else if (hashCode == DEPRIORITIZED_DUE_TO_INACTIVITY_HASH)
          {
            return JobEventType::DEPRIORITIZED_DUE_TO_INACTIVITY;
          }
          else if (hashCode == UPLOADING_RESULTS_HASH)
          {
            return JobEventType::UPLOADING_RESULTS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return JobEventType::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobEventType::FAILED;
          }
          else if (hashCode == MAX_RUNTIME_EXCEEDED_HASH)
          {
            return JobEventType::MAX_RUNTIME_EXCEEDED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return JobEventType::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobEventType>(hashCode);
          }

          return JobEventType::NOT_SET;
        }

        Aws::String GetNameForJobEventType(JobEventType enumValue)
        {
          switch(enumValue)
          {
          case JobEventType::NOT_SET:
            return {};
          case JobEventType::WAITING_FOR_PRIORITY:
            return "WAITING_FOR_PRIORITY";
          case JobEventType::QUEUED_FOR_EXECUTION:
            return "QUEUED_FOR_EXECUTION";
          case JobEventType::STARTING_INSTANCE:
            return "STARTING_INSTANCE";
          case JobEventType::DOWNLOADING_DATA:
            return "DOWNLOADING_DATA";
          case JobEventType::RUNNING:
            return "RUNNING";
          case JobEventType::DEPRIORITIZED_DUE_TO_INACTIVITY:
            return "DEPRIORITIZED_DUE_TO_INACTIVITY";
          case JobEventType::UPLOADING_RESULTS:
            return "UPLOADING_RESULTS";
          case JobEventType::COMPLETED:
            return "COMPLETED";
          case JobEventType::FAILED:
            return "FAILED";
          case JobEventType::MAX_RUNTIME_EXCEEDED:
            return "MAX_RUNTIME_EXCEEDED";
          case JobEventType::CANCELLED:
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

      } // namespace JobEventTypeMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
