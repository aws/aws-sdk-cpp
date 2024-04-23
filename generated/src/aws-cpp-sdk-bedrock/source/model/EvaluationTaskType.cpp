/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationTaskType.h>
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
      namespace EvaluationTaskTypeMapper
      {

        static const int Summarization_HASH = HashingUtils::HashString("Summarization");
        static const int Classification_HASH = HashingUtils::HashString("Classification");
        static const int QuestionAndAnswer_HASH = HashingUtils::HashString("QuestionAndAnswer");
        static const int Generation_HASH = HashingUtils::HashString("Generation");
        static const int Custom_HASH = HashingUtils::HashString("Custom");


        EvaluationTaskType GetEvaluationTaskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Summarization_HASH)
          {
            return EvaluationTaskType::Summarization;
          }
          else if (hashCode == Classification_HASH)
          {
            return EvaluationTaskType::Classification;
          }
          else if (hashCode == QuestionAndAnswer_HASH)
          {
            return EvaluationTaskType::QuestionAndAnswer;
          }
          else if (hashCode == Generation_HASH)
          {
            return EvaluationTaskType::Generation;
          }
          else if (hashCode == Custom_HASH)
          {
            return EvaluationTaskType::Custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationTaskType>(hashCode);
          }

          return EvaluationTaskType::NOT_SET;
        }

        Aws::String GetNameForEvaluationTaskType(EvaluationTaskType enumValue)
        {
          switch(enumValue)
          {
          case EvaluationTaskType::NOT_SET:
            return {};
          case EvaluationTaskType::Summarization:
            return "Summarization";
          case EvaluationTaskType::Classification:
            return "Classification";
          case EvaluationTaskType::QuestionAndAnswer:
            return "QuestionAndAnswer";
          case EvaluationTaskType::Generation:
            return "Generation";
          case EvaluationTaskType::Custom:
            return "Custom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationTaskTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
