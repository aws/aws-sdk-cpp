/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker/model/HyperParameterScalingType.h>
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
      namespace HyperParameterScalingTypeMapper
      {

        static const int Auto_HASH = HashingUtils::HashString("Auto");
        static const int Linear_HASH = HashingUtils::HashString("Linear");
        static const int Logarithmic_HASH = HashingUtils::HashString("Logarithmic");
        static const int ReverseLogarithmic_HASH = HashingUtils::HashString("ReverseLogarithmic");


        HyperParameterScalingType GetHyperParameterScalingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Auto_HASH)
          {
            return HyperParameterScalingType::Auto;
          }
          else if (hashCode == Linear_HASH)
          {
            return HyperParameterScalingType::Linear;
          }
          else if (hashCode == Logarithmic_HASH)
          {
            return HyperParameterScalingType::Logarithmic;
          }
          else if (hashCode == ReverseLogarithmic_HASH)
          {
            return HyperParameterScalingType::ReverseLogarithmic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterScalingType>(hashCode);
          }

          return HyperParameterScalingType::NOT_SET;
        }

        Aws::String GetNameForHyperParameterScalingType(HyperParameterScalingType enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterScalingType::Auto:
            return "Auto";
          case HyperParameterScalingType::Linear:
            return "Linear";
          case HyperParameterScalingType::Logarithmic:
            return "Logarithmic";
          case HyperParameterScalingType::ReverseLogarithmic:
            return "ReverseLogarithmic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperParameterScalingTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
