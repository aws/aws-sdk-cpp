/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyTestRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace AutomatedReasoningPolicyTestRunStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AutomatedReasoningPolicyTestRunStatus GetAutomatedReasoningPolicyTestRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return AutomatedReasoningPolicyTestRunStatus::NOT_STARTED;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return AutomatedReasoningPolicyTestRunStatus::SCHEDULED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return AutomatedReasoningPolicyTestRunStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AutomatedReasoningPolicyTestRunStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AutomatedReasoningPolicyTestRunStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedReasoningPolicyTestRunStatus>(hashCode);
          }

          return AutomatedReasoningPolicyTestRunStatus::NOT_SET;
        }

        Aws::String GetNameForAutomatedReasoningPolicyTestRunStatus(AutomatedReasoningPolicyTestRunStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomatedReasoningPolicyTestRunStatus::NOT_SET:
            return {};
          case AutomatedReasoningPolicyTestRunStatus::NOT_STARTED:
            return "NOT_STARTED";
          case AutomatedReasoningPolicyTestRunStatus::SCHEDULED:
            return "SCHEDULED";
          case AutomatedReasoningPolicyTestRunStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AutomatedReasoningPolicyTestRunStatus::COMPLETED:
            return "COMPLETED";
          case AutomatedReasoningPolicyTestRunStatus::FAILED:
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

      } // namespace AutomatedReasoningPolicyTestRunStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
