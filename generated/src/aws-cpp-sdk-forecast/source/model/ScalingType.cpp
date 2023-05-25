/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
