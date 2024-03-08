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

        static const int TRAINING_HASH = HashingUtils::HashString("TRAINING");
        static const int EVALUATING_HASH = HashingUtils::HashString("EVALUATING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOP_REQUESTED_HASH = HashingUtils::HashString("STOP_REQUESTED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        FlywheelIterationStatus GetFlywheelIterationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
