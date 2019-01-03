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

#include <aws/mediaconvert/model/AudioNormalizationAlgorithmControl.h>
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
      namespace AudioNormalizationAlgorithmControlMapper
      {

        static const int CORRECT_AUDIO_HASH = HashingUtils::HashString("CORRECT_AUDIO");
        static const int MEASURE_ONLY_HASH = HashingUtils::HashString("MEASURE_ONLY");


        AudioNormalizationAlgorithmControl GetAudioNormalizationAlgorithmControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CORRECT_AUDIO_HASH)
          {
            return AudioNormalizationAlgorithmControl::CORRECT_AUDIO;
          }
          else if (hashCode == MEASURE_ONLY_HASH)
          {
            return AudioNormalizationAlgorithmControl::MEASURE_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioNormalizationAlgorithmControl>(hashCode);
          }

          return AudioNormalizationAlgorithmControl::NOT_SET;
        }

        Aws::String GetNameForAudioNormalizationAlgorithmControl(AudioNormalizationAlgorithmControl enumValue)
        {
          switch(enumValue)
          {
          case AudioNormalizationAlgorithmControl::CORRECT_AUDIO:
            return "CORRECT_AUDIO";
          case AudioNormalizationAlgorithmControl::MEASURE_ONLY:
            return "MEASURE_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioNormalizationAlgorithmControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
