/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowStatus.h>
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
      namespace AutomatedReasoningPolicyBuildWorkflowStatusMapper
      {

        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int CANCEL_REQUESTED_HASH = HashingUtils::HashString("CANCEL_REQUESTED");
        static const int PREPROCESSING_HASH = HashingUtils::HashString("PREPROCESSING");
        static const int BUILDING_HASH = HashingUtils::HashString("BUILDING");
        static const int TESTING_HASH = HashingUtils::HashString("TESTING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        AutomatedReasoningPolicyBuildWorkflowStatus GetAutomatedReasoningPolicyBuildWorkflowStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowStatus::SCHEDULED;
          }
          else if (hashCode == CANCEL_REQUESTED_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowStatus::CANCEL_REQUESTED;
          }
          else if (hashCode == PREPROCESSING_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowStatus::PREPROCESSING;
          }
          else if (hashCode == BUILDING_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowStatus::BUILDING;
          }
          else if (hashCode == TESTING_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowStatus::TESTING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowStatus::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedReasoningPolicyBuildWorkflowStatus>(hashCode);
          }

          return AutomatedReasoningPolicyBuildWorkflowStatus::NOT_SET;
        }

        Aws::String GetNameForAutomatedReasoningPolicyBuildWorkflowStatus(AutomatedReasoningPolicyBuildWorkflowStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomatedReasoningPolicyBuildWorkflowStatus::NOT_SET:
            return {};
          case AutomatedReasoningPolicyBuildWorkflowStatus::SCHEDULED:
            return "SCHEDULED";
          case AutomatedReasoningPolicyBuildWorkflowStatus::CANCEL_REQUESTED:
            return "CANCEL_REQUESTED";
          case AutomatedReasoningPolicyBuildWorkflowStatus::PREPROCESSING:
            return "PREPROCESSING";
          case AutomatedReasoningPolicyBuildWorkflowStatus::BUILDING:
            return "BUILDING";
          case AutomatedReasoningPolicyBuildWorkflowStatus::TESTING:
            return "TESTING";
          case AutomatedReasoningPolicyBuildWorkflowStatus::COMPLETED:
            return "COMPLETED";
          case AutomatedReasoningPolicyBuildWorkflowStatus::FAILED:
            return "FAILED";
          case AutomatedReasoningPolicyBuildWorkflowStatus::CANCELLED:
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

      } // namespace AutomatedReasoningPolicyBuildWorkflowStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
