/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/StepState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace StepStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int CANCEL_PENDING_HASH = HashingUtils::HashString("CANCEL_PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INTERRUPTED_HASH = HashingUtils::HashString("INTERRUPTED");


        StepState GetStepStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return StepState::PENDING;
          }
          else if (hashCode == CANCEL_PENDING_HASH)
          {
            return StepState::CANCEL_PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return StepState::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return StepState::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return StepState::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StepState::FAILED;
          }
          else if (hashCode == INTERRUPTED_HASH)
          {
            return StepState::INTERRUPTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepState>(hashCode);
          }

          return StepState::NOT_SET;
        }

        Aws::String GetNameForStepState(StepState enumValue)
        {
          switch(enumValue)
          {
          case StepState::PENDING:
            return "PENDING";
          case StepState::CANCEL_PENDING:
            return "CANCEL_PENDING";
          case StepState::RUNNING:
            return "RUNNING";
          case StepState::COMPLETED:
            return "COMPLETED";
          case StepState::CANCELLED:
            return "CANCELLED";
          case StepState::FAILED:
            return "FAILED";
          case StepState::INTERRUPTED:
            return "INTERRUPTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepStateMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
