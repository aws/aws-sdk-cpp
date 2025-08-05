/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyTestRunResult.h>
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
      namespace AutomatedReasoningPolicyTestRunResultMapper
      {

        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AutomatedReasoningPolicyTestRunResult GetAutomatedReasoningPolicyTestRunResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSED_HASH)
          {
            return AutomatedReasoningPolicyTestRunResult::PASSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AutomatedReasoningPolicyTestRunResult::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedReasoningPolicyTestRunResult>(hashCode);
          }

          return AutomatedReasoningPolicyTestRunResult::NOT_SET;
        }

        Aws::String GetNameForAutomatedReasoningPolicyTestRunResult(AutomatedReasoningPolicyTestRunResult enumValue)
        {
          switch(enumValue)
          {
          case AutomatedReasoningPolicyTestRunResult::NOT_SET:
            return {};
          case AutomatedReasoningPolicyTestRunResult::PASSED:
            return "PASSED";
          case AutomatedReasoningPolicyTestRunResult::FAILED:
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

      } // namespace AutomatedReasoningPolicyTestRunResultMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
