/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationJobType.h>
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
      namespace EvaluationJobTypeMapper
      {

        static const int Human_HASH = HashingUtils::HashString("Human");
        static const int Automated_HASH = HashingUtils::HashString("Automated");


        EvaluationJobType GetEvaluationJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Human_HASH)
          {
            return EvaluationJobType::Human;
          }
          else if (hashCode == Automated_HASH)
          {
            return EvaluationJobType::Automated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationJobType>(hashCode);
          }

          return EvaluationJobType::NOT_SET;
        }

        Aws::String GetNameForEvaluationJobType(EvaluationJobType enumValue)
        {
          switch(enumValue)
          {
          case EvaluationJobType::NOT_SET:
            return {};
          case EvaluationJobType::Human:
            return "Human";
          case EvaluationJobType::Automated:
            return "Automated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationJobTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
