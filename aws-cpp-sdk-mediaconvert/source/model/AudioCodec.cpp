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

#include <aws/mediaconvert/model/AudioCodec.h>
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
      namespace AudioCodecMapper
      {

        static const int AAC_HASH = HashingUtils::HashString("AAC");
        static const int MP2_HASH = HashingUtils::HashString("MP2");
        static const int MP3_HASH = HashingUtils::HashString("MP3");
        static const int WAV_HASH = HashingUtils::HashString("WAV");
        static const int AIFF_HASH = HashingUtils::HashString("AIFF");
        static const int AC3_HASH = HashingUtils::HashString("AC3");
        static const int EAC3_HASH = HashingUtils::HashString("EAC3");
        static const int EAC3_ATMOS_HASH = HashingUtils::HashString("EAC3_ATMOS");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        AudioCodec GetAudioCodecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AAC_HASH)
          {
            return AudioCodec::AAC;
          }
          else if (hashCode == MP2_HASH)
          {
            return AudioCodec::MP2;
          }
          else if (hashCode == MP3_HASH)
          {
            return AudioCodec::MP3;
          }
          else if (hashCode == WAV_HASH)
          {
            return AudioCodec::WAV;
          }
          else if (hashCode == AIFF_HASH)
          {
            return AudioCodec::AIFF;
          }
          else if (hashCode == AC3_HASH)
          {
            return AudioCodec::AC3;
          }
          else if (hashCode == EAC3_HASH)
          {
            return AudioCodec::EAC3;
          }
          else if (hashCode == EAC3_ATMOS_HASH)
          {
            return AudioCodec::EAC3_ATMOS;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return AudioCodec::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioCodec>(hashCode);
          }

          return AudioCodec::NOT_SET;
        }

        Aws::String GetNameForAudioCodec(AudioCodec enumValue)
        {
          switch(enumValue)
          {
          case AudioCodec::AAC:
            return "AAC";
          case AudioCodec::MP2:
            return "MP2";
          case AudioCodec::MP3:
            return "MP3";
          case AudioCodec::WAV:
            return "WAV";
          case AudioCodec::AIFF:
            return "AIFF";
          case AudioCodec::AC3:
            return "AC3";
          case AudioCodec::EAC3:
            return "EAC3";
          case AudioCodec::EAC3_ATMOS:
            return "EAC3_ATMOS";
          case AudioCodec::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioCodecMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
