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

#include <aws/mediaconvert/model/AudioNormalizationAlgorithm.h>
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
      namespace AudioNormalizationAlgorithmMapper
      {

        static const int ITU_BS_1770_1_HASH = HashingUtils::HashString("ITU_BS_1770_1");
        static const int ITU_BS_1770_2_HASH = HashingUtils::HashString("ITU_BS_1770_2");
        static const int ITU_BS_1770_3_HASH = HashingUtils::HashString("ITU_BS_1770_3");
        static const int ITU_BS_1770_4_HASH = HashingUtils::HashString("ITU_BS_1770_4");


        AudioNormalizationAlgorithm GetAudioNormalizationAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ITU_BS_1770_1_HASH)
          {
            return AudioNormalizationAlgorithm::ITU_BS_1770_1;
          }
          else if (hashCode == ITU_BS_1770_2_HASH)
          {
            return AudioNormalizationAlgorithm::ITU_BS_1770_2;
          }
          else if (hashCode == ITU_BS_1770_3_HASH)
          {
            return AudioNormalizationAlgorithm::ITU_BS_1770_3;
          }
          else if (hashCode == ITU_BS_1770_4_HASH)
          {
            return AudioNormalizationAlgorithm::ITU_BS_1770_4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioNormalizationAlgorithm>(hashCode);
          }

          return AudioNormalizationAlgorithm::NOT_SET;
        }

        Aws::String GetNameForAudioNormalizationAlgorithm(AudioNormalizationAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case AudioNormalizationAlgorithm::ITU_BS_1770_1:
            return "ITU_BS_1770_1";
          case AudioNormalizationAlgorithm::ITU_BS_1770_2:
            return "ITU_BS_1770_2";
          case AudioNormalizationAlgorithm::ITU_BS_1770_3:
            return "ITU_BS_1770_3";
          case AudioNormalizationAlgorithm::ITU_BS_1770_4:
            return "ITU_BS_1770_4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioNormalizationAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
