/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RemediationExecutionStepState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace RemediationExecutionStepStateMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int EXITED_HASH = HashingUtils::HashString("EXITED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        RemediationExecutionStepState GetRemediationExecutionStepStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return RemediationExecutionStepState::SUCCEEDED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return RemediationExecutionStepState::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RemediationExecutionStepState::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RemediationExecutionStepState::IN_PROGRESS;
          }
          else if (hashCode == EXITED_HASH)
          {
            return RemediationExecutionStepState::EXITED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return RemediationExecutionStepState::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RemediationExecutionStepState>(hashCode);
          }

          return RemediationExecutionStepState::NOT_SET;
        }

        Aws::String GetNameForRemediationExecutionStepState(RemediationExecutionStepState enumValue)
        {
          switch(enumValue)
          {
          case RemediationExecutionStepState::NOT_SET:
            return {};
          case RemediationExecutionStepState::SUCCEEDED:
            return "SUCCEEDED";
          case RemediationExecutionStepState::PENDING:
            return "PENDING";
          case RemediationExecutionStepState::FAILED:
            return "FAILED";
          case RemediationExecutionStepState::IN_PROGRESS:
            return "IN_PROGRESS";
          case RemediationExecutionStepState::EXITED:
            return "EXITED";
          case RemediationExecutionStepState::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RemediationExecutionStepStateMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
