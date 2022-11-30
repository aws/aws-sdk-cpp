/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DQTransformOutput.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace DQTransformOutputMapper
      {

        static const int PrimaryInput_HASH = HashingUtils::HashString("PrimaryInput");
        static const int EvaluationResults_HASH = HashingUtils::HashString("EvaluationResults");


        DQTransformOutput GetDQTransformOutputForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PrimaryInput_HASH)
          {
            return DQTransformOutput::PrimaryInput;
          }
          else if (hashCode == EvaluationResults_HASH)
          {
            return DQTransformOutput::EvaluationResults;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DQTransformOutput>(hashCode);
          }

          return DQTransformOutput::NOT_SET;
        }

        Aws::String GetNameForDQTransformOutput(DQTransformOutput enumValue)
        {
          switch(enumValue)
          {
          case DQTransformOutput::PrimaryInput:
            return "PrimaryInput";
          case DQTransformOutput::EvaluationResults:
            return "EvaluationResults";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DQTransformOutputMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
