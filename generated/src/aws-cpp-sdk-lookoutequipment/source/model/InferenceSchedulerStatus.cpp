/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InferenceSchedulerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace InferenceSchedulerStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        InferenceSchedulerStatus GetInferenceSchedulerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return InferenceSchedulerStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return InferenceSchedulerStatus::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return InferenceSchedulerStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return InferenceSchedulerStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceSchedulerStatus>(hashCode);
          }

          return InferenceSchedulerStatus::NOT_SET;
        }

        Aws::String GetNameForInferenceSchedulerStatus(InferenceSchedulerStatus enumValue)
        {
          switch(enumValue)
          {
          case InferenceSchedulerStatus::NOT_SET:
            return {};
          case InferenceSchedulerStatus::PENDING:
            return "PENDING";
          case InferenceSchedulerStatus::RUNNING:
            return "RUNNING";
          case InferenceSchedulerStatus::STOPPING:
            return "STOPPING";
          case InferenceSchedulerStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferenceSchedulerStatusMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
