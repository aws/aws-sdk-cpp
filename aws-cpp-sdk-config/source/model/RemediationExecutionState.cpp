/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RemediationExecutionState.h>
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
      namespace RemediationExecutionStateMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RemediationExecutionState GetRemediationExecutionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return RemediationExecutionState::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RemediationExecutionState::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return RemediationExecutionState::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RemediationExecutionState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RemediationExecutionState>(hashCode);
          }

          return RemediationExecutionState::NOT_SET;
        }

        Aws::String GetNameForRemediationExecutionState(RemediationExecutionState enumValue)
        {
          switch(enumValue)
          {
          case RemediationExecutionState::QUEUED:
            return "QUEUED";
          case RemediationExecutionState::IN_PROGRESS:
            return "IN_PROGRESS";
          case RemediationExecutionState::SUCCEEDED:
            return "SUCCEEDED";
          case RemediationExecutionState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RemediationExecutionStateMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
