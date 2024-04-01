/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/WorkerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace WorkerStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int NOT_RESPONDING_HASH = HashingUtils::HashString("NOT_RESPONDING");
        static const int NOT_COMPATIBLE_HASH = HashingUtils::HashString("NOT_COMPATIBLE");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int IDLE_HASH = HashingUtils::HashString("IDLE");


        WorkerStatus GetWorkerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return WorkerStatus::CREATED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return WorkerStatus::STARTED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return WorkerStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return WorkerStatus::STOPPED;
          }
          else if (hashCode == NOT_RESPONDING_HASH)
          {
            return WorkerStatus::NOT_RESPONDING;
          }
          else if (hashCode == NOT_COMPATIBLE_HASH)
          {
            return WorkerStatus::NOT_COMPATIBLE;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return WorkerStatus::RUNNING;
          }
          else if (hashCode == IDLE_HASH)
          {
            return WorkerStatus::IDLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkerStatus>(hashCode);
          }

          return WorkerStatus::NOT_SET;
        }

        Aws::String GetNameForWorkerStatus(WorkerStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkerStatus::NOT_SET:
            return {};
          case WorkerStatus::CREATED:
            return "CREATED";
          case WorkerStatus::STARTED:
            return "STARTED";
          case WorkerStatus::STOPPING:
            return "STOPPING";
          case WorkerStatus::STOPPED:
            return "STOPPED";
          case WorkerStatus::NOT_RESPONDING:
            return "NOT_RESPONDING";
          case WorkerStatus::NOT_COMPATIBLE:
            return "NOT_COMPATIBLE";
          case WorkerStatus::RUNNING:
            return "RUNNING";
          case WorkerStatus::IDLE:
            return "IDLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkerStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
