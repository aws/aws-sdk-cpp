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

#include <aws/autoscaling-plans/model/PredictiveScalingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScalingPlans
  {
    namespace Model
    {
      namespace PredictiveScalingModeMapper
      {

        static const int ForecastAndScale_HASH = HashingUtils::HashString("ForecastAndScale");
        static const int ForecastOnly_HASH = HashingUtils::HashString("ForecastOnly");


        PredictiveScalingMode GetPredictiveScalingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ForecastAndScale_HASH)
          {
            return PredictiveScalingMode::ForecastAndScale;
          }
          else if (hashCode == ForecastOnly_HASH)
          {
            return PredictiveScalingMode::ForecastOnly;
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
          case PredictiveScalingMode::ForecastAndScale:
            return "ForecastAndScale";
          case PredictiveScalingMode::ForecastOnly:
            return "ForecastOnly";
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
  } // namespace AutoScalingPlans
} // namespace Aws
