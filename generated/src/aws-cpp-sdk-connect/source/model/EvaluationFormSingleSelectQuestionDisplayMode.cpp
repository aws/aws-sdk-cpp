/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormSingleSelectQuestionDisplayMode.h>
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
      namespace EvaluationFormSingleSelectQuestionDisplayModeMapper
      {

        static constexpr uint32_t DROPDOWN_HASH = ConstExprHashingUtils::HashString("DROPDOWN");
        static constexpr uint32_t RADIO_HASH = ConstExprHashingUtils::HashString("RADIO");


        EvaluationFormSingleSelectQuestionDisplayMode GetEvaluationFormSingleSelectQuestionDisplayModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DROPDOWN_HASH)
          {
            return EvaluationFormSingleSelectQuestionDisplayMode::DROPDOWN;
          }
          else if (hashCode == RADIO_HASH)
          {
            return EvaluationFormSingleSelectQuestionDisplayMode::RADIO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationFormSingleSelectQuestionDisplayMode>(hashCode);
          }

          return EvaluationFormSingleSelectQuestionDisplayMode::NOT_SET;
        }

        Aws::String GetNameForEvaluationFormSingleSelectQuestionDisplayMode(EvaluationFormSingleSelectQuestionDisplayMode enumValue)
        {
          switch(enumValue)
          {
          case EvaluationFormSingleSelectQuestionDisplayMode::NOT_SET:
            return {};
          case EvaluationFormSingleSelectQuestionDisplayMode::DROPDOWN:
            return "DROPDOWN";
          case EvaluationFormSingleSelectQuestionDisplayMode::RADIO:
            return "RADIO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationFormSingleSelectQuestionDisplayModeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
