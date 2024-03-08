/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormScoringMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace EvaluationFormScoringModeMapper
      {

        static const int QUESTION_ONLY_HASH = HashingUtils::HashString("QUESTION_ONLY");
        static const int SECTION_ONLY_HASH = HashingUtils::HashString("SECTION_ONLY");


        EvaluationFormScoringMode GetEvaluationFormScoringModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUESTION_ONLY_HASH)
          {
            return EvaluationFormScoringMode::QUESTION_ONLY;
          }
          else if (hashCode == SECTION_ONLY_HASH)
          {
            return EvaluationFormScoringMode::SECTION_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationFormScoringMode>(hashCode);
          }

          return EvaluationFormScoringMode::NOT_SET;
        }

        Aws::String GetNameForEvaluationFormScoringMode(EvaluationFormScoringMode enumValue)
        {
          switch(enumValue)
          {
          case EvaluationFormScoringMode::NOT_SET:
            return {};
          case EvaluationFormScoringMode::QUESTION_ONLY:
            return "QUESTION_ONLY";
          case EvaluationFormScoringMode::SECTION_ONLY:
            return "SECTION_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationFormScoringModeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
