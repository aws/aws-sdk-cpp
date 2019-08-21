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

#include <aws/forecast/model/ScalingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace ScalingTypeMapper
      {

        static const int Auto_HASH = HashingUtils::HashString("Auto");
        static const int Linear_HASH = HashingUtils::HashString("Linear");
        static const int Logarithmic_HASH = HashingUtils::HashString("Logarithmic");
        static const int ReverseLogarithmic_HASH = HashingUtils::HashString("ReverseLogarithmic");


        ScalingType GetScalingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Auto_HASH)
          {
            return ScalingType::Auto;
          }
          else if (hashCode == Linear_HASH)
          {
            return ScalingType::Linear;
          }
          else if (hashCode == Logarithmic_HASH)
          {
            return ScalingType::Logarithmic;
          }
          else if (hashCode == ReverseLogarithmic_HASH)
          {
            return ScalingType::ReverseLogarithmic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingType>(hashCode);
          }

          return ScalingType::NOT_SET;
        }

        Aws::String GetNameForScalingType(ScalingType enumValue)
        {
          switch(enumValue)
          {
          case ScalingType::Auto:
            return "Auto";
          case ScalingType::Linear:
            return "Linear";
          case ScalingType::Logarithmic:
            return "Logarithmic";
          case ScalingType::ReverseLogarithmic:
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

      } // namespace ScalingTypeMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
