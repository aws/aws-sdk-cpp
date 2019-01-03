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

#include <aws/mediaconvert/model/AudioNormalizationPeakCalculation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace AudioNormalizationPeakCalculationMapper
      {

        static const int TRUE_PEAK_HASH = HashingUtils::HashString("TRUE_PEAK");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AudioNormalizationPeakCalculation GetAudioNormalizationPeakCalculationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_PEAK_HASH)
          {
            return AudioNormalizationPeakCalculation::TRUE_PEAK;
          }
          else if (hashCode == NONE_HASH)
          {
            return AudioNormalizationPeakCalculation::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioNormalizationPeakCalculation>(hashCode);
          }

          return AudioNormalizationPeakCalculation::NOT_SET;
        }

        Aws::String GetNameForAudioNormalizationPeakCalculation(AudioNormalizationPeakCalculation enumValue)
        {
          switch(enumValue)
          {
          case AudioNormalizationPeakCalculation::TRUE_PEAK:
            return "TRUE_PEAK";
          case AudioNormalizationPeakCalculation::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioNormalizationPeakCalculationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
