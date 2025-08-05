/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningCheckResult.h>
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
      namespace AutomatedReasoningCheckResultMapper
      {

        static const int VALID_HASH = HashingUtils::HashString("VALID");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");
        static const int SATISFIABLE_HASH = HashingUtils::HashString("SATISFIABLE");
        static const int IMPOSSIBLE_HASH = HashingUtils::HashString("IMPOSSIBLE");
        static const int TRANSLATION_AMBIGUOUS_HASH = HashingUtils::HashString("TRANSLATION_AMBIGUOUS");
        static const int TOO_COMPLEX_HASH = HashingUtils::HashString("TOO_COMPLEX");
        static const int NO_TRANSLATION_HASH = HashingUtils::HashString("NO_TRANSLATION");


        AutomatedReasoningCheckResult GetAutomatedReasoningCheckResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALID_HASH)
          {
            return AutomatedReasoningCheckResult::VALID;
          }
          else if (hashCode == INVALID_HASH)
          {
            return AutomatedReasoningCheckResult::INVALID;
          }
          else if (hashCode == SATISFIABLE_HASH)
          {
            return AutomatedReasoningCheckResult::SATISFIABLE;
          }
          else if (hashCode == IMPOSSIBLE_HASH)
          {
            return AutomatedReasoningCheckResult::IMPOSSIBLE;
          }
          else if (hashCode == TRANSLATION_AMBIGUOUS_HASH)
          {
            return AutomatedReasoningCheckResult::TRANSLATION_AMBIGUOUS;
          }
          else if (hashCode == TOO_COMPLEX_HASH)
          {
            return AutomatedReasoningCheckResult::TOO_COMPLEX;
          }
          else if (hashCode == NO_TRANSLATION_HASH)
          {
            return AutomatedReasoningCheckResult::NO_TRANSLATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedReasoningCheckResult>(hashCode);
          }

          return AutomatedReasoningCheckResult::NOT_SET;
        }

        Aws::String GetNameForAutomatedReasoningCheckResult(AutomatedReasoningCheckResult enumValue)
        {
          switch(enumValue)
          {
          case AutomatedReasoningCheckResult::NOT_SET:
            return {};
          case AutomatedReasoningCheckResult::VALID:
            return "VALID";
          case AutomatedReasoningCheckResult::INVALID:
            return "INVALID";
          case AutomatedReasoningCheckResult::SATISFIABLE:
            return "SATISFIABLE";
          case AutomatedReasoningCheckResult::IMPOSSIBLE:
            return "IMPOSSIBLE";
          case AutomatedReasoningCheckResult::TRANSLATION_AMBIGUOUS:
            return "TRANSLATION_AMBIGUOUS";
          case AutomatedReasoningCheckResult::TOO_COMPLEX:
            return "TOO_COMPLEX";
          case AutomatedReasoningCheckResult::NO_TRANSLATION:
            return "NO_TRANSLATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomatedReasoningCheckResultMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
