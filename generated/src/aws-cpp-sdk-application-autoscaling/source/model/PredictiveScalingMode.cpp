/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/PredictiveScalingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationAutoScaling
  {
    namespace Model
    {
      namespace PredictiveScalingModeMapper
      {

        static const int ForecastOnly_HASH = HashingUtils::HashString("ForecastOnly");
        static const int ForecastAndScale_HASH = HashingUtils::HashString("ForecastAndScale");


        PredictiveScalingMode GetPredictiveScalingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ForecastOnly_HASH)
          {
            return PredictiveScalingMode::ForecastOnly;
          }
          else if (hashCode == ForecastAndScale_HASH)
          {
            return PredictiveScalingMode::ForecastAndScale;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PredictiveScalingMode>(hashCode);
          }

          return PredictiveScalingMode::NOT_SET;
        }

        Aws::String GetNameForPredictiveScalingMode(PredictiveScalingMode enumValue)
        {
          switch(enumValue)
          {
          case PredictiveScalingMode::NOT_SET:
            return {};
          case PredictiveScalingMode::ForecastOnly:
            return "ForecastOnly";
          case PredictiveScalingMode::ForecastAndScale:
            return "ForecastAndScale";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PredictiveScalingModeMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
