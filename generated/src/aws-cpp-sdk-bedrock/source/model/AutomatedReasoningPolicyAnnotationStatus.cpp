/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotationStatus.h>
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
      namespace AutomatedReasoningPolicyAnnotationStatusMapper
      {

        static const int APPLIED_HASH = HashingUtils::HashString("APPLIED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AutomatedReasoningPolicyAnnotationStatus GetAutomatedReasoningPolicyAnnotationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLIED_HASH)
          {
            return AutomatedReasoningPolicyAnnotationStatus::APPLIED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AutomatedReasoningPolicyAnnotationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedReasoningPolicyAnnotationStatus>(hashCode);
          }

          return AutomatedReasoningPolicyAnnotationStatus::NOT_SET;
        }

        Aws::String GetNameForAutomatedReasoningPolicyAnnotationStatus(AutomatedReasoningPolicyAnnotationStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomatedReasoningPolicyAnnotationStatus::NOT_SET:
            return {};
          case AutomatedReasoningPolicyAnnotationStatus::APPLIED:
            return "APPLIED";
          case AutomatedReasoningPolicyAnnotationStatus::FAILED:
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

      } // namespace AutomatedReasoningPolicyAnnotationStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
