/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormQuestionType.h>
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
      namespace EvaluationFormQuestionTypeMapper
      {

        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int SINGLESELECT_HASH = HashingUtils::HashString("SINGLESELECT");
        static const int NUMERIC_HASH = HashingUtils::HashString("NUMERIC");


        EvaluationFormQuestionType GetEvaluationFormQuestionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return EvaluationFormQuestionType::TEXT;
          }
          else if (hashCode == SINGLESELECT_HASH)
          {
            return EvaluationFormQuestionType::SINGLESELECT;
          }
          else if (hashCode == NUMERIC_HASH)
          {
            return EvaluationFormQuestionType::NUMERIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationFormQuestionType>(hashCode);
          }

          return EvaluationFormQuestionType::NOT_SET;
        }

        Aws::String GetNameForEvaluationFormQuestionType(EvaluationFormQuestionType enumValue)
        {
          switch(enumValue)
          {
          case EvaluationFormQuestionType::NOT_SET:
            return {};
          case EvaluationFormQuestionType::TEXT:
            return "TEXT";
          case EvaluationFormQuestionType::SINGLESELECT:
            return "SINGLESELECT";
          case EvaluationFormQuestionType::NUMERIC:
            return "NUMERIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationFormQuestionTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
