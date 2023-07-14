/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ParameterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ParameterTypeMapper
      {

        static const int Integer_HASH = HashingUtils::HashString("Integer");
        static const int Continuous_HASH = HashingUtils::HashString("Continuous");
        static const int Categorical_HASH = HashingUtils::HashString("Categorical");
        static const int FreeText_HASH = HashingUtils::HashString("FreeText");


        ParameterType GetParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Integer_HASH)
          {
            return ParameterType::Integer;
          }
          else if (hashCode == Continuous_HASH)
          {
            return ParameterType::Continuous;
          }
          else if (hashCode == Categorical_HASH)
          {
            return ParameterType::Categorical;
          }
          else if (hashCode == FreeText_HASH)
          {
            return ParameterType::FreeText;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterType>(hashCode);
          }

          return ParameterType::NOT_SET;
        }

        Aws::String GetNameForParameterType(ParameterType enumValue)
        {
          switch(enumValue)
          {
          case ParameterType::Integer:
            return "Integer";
          case ParameterType::Continuous:
            return "Continuous";
          case ParameterType::Categorical:
            return "Categorical";
          case ParameterType::FreeText:
            return "FreeText";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
