/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/FlywheelIterationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace FlywheelIterationStatusMapper
      {

        static constexpr uint32_t TRAINING_HASH = ConstExprHashingUtils::HashString("TRAINING");
        static constexpr uint32_t EVALUATING_HASH = ConstExprHashingUtils::HashString("EVALUATING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t STOP_REQUESTED_HASH = ConstExprHashingUtils::HashString("STOP_REQUESTED");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        FlywheelIterationStatus GetFlywheelIterationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRAINING_HASH)
          {
            return FlywheelIterationStatus::TRAINING;
          }
          else if (hashCode == EVALUATING_HASH)
          {
            return FlywheelIterationStatus::EVALUATING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return FlywheelIterationStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return FlywheelIterationStatus::FAILED;
          }
          else if (hashCode == STOP_REQUESTED_HASH)
          {
            return FlywheelIterationStatus::STOP_REQUESTED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return FlywheelIterationStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlywheelIterationStatus>(hashCode);
          }

          return FlywheelIterationStatus::NOT_SET;
        }

        Aws::String GetNameForFlywheelIterationStatus(FlywheelIterationStatus enumValue)
        {
          switch(enumValue)
          {
          case FlywheelIterationStatus::NOT_SET:
            return {};
          case FlywheelIterationStatus::TRAINING:
            return "TRAINING";
          case FlywheelIterationStatus::EVALUATING:
            return "EVALUATING";
          case FlywheelIterationStatus::COMPLETED:
            return "COMPLETED";
          case FlywheelIterationStatus::FAILED:
            return "FAILED";
          case FlywheelIterationStatus::STOP_REQUESTED:
            return "STOP_REQUESTED";
          case FlywheelIterationStatus::STOPPED:
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

      } // namespace FlywheelIterationStatusMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
