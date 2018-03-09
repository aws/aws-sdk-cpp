﻿/*
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

#include <aws/mediaconvert/model/HlsAudioTrackType.h>
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
      namespace HlsAudioTrackTypeMapper
      {

        static const int ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT_HASH = HashingUtils::HashString("ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT");
        static const int ALTERNATE_AUDIO_AUTO_SELECT_HASH = HashingUtils::HashString("ALTERNATE_AUDIO_AUTO_SELECT");
        static const int ALTERNATE_AUDIO_NOT_AUTO_SELECT_HASH = HashingUtils::HashString("ALTERNATE_AUDIO_NOT_AUTO_SELECT");
        static const int AUDIO_ONLY_VARIANT_STREAM_HASH = HashingUtils::HashString("AUDIO_ONLY_VARIANT_STREAM");


        HlsAudioTrackType GetHlsAudioTrackTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT_HASH)
          {
            return HlsAudioTrackType::ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT;
          }
          else if (hashCode == ALTERNATE_AUDIO_AUTO_SELECT_HASH)
          {
            return HlsAudioTrackType::ALTERNATE_AUDIO_AUTO_SELECT;
          }
          else if (hashCode == ALTERNATE_AUDIO_NOT_AUTO_SELECT_HASH)
          {
            return HlsAudioTrackType::ALTERNATE_AUDIO_NOT_AUTO_SELECT;
          }
          else if (hashCode == AUDIO_ONLY_VARIANT_STREAM_HASH)
          {
            return HlsAudioTrackType::AUDIO_ONLY_VARIANT_STREAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsAudioTrackType>(hashCode);
          }

          return HlsAudioTrackType::NOT_SET;
        }

        Aws::String GetNameForHlsAudioTrackType(HlsAudioTrackType enumValue)
        {
          switch(enumValue)
          {
          case HlsAudioTrackType::ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT:
            return "ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT";
          case HlsAudioTrackType::ALTERNATE_AUDIO_AUTO_SELECT:
            return "ALTERNATE_AUDIO_AUTO_SELECT";
          case HlsAudioTrackType::ALTERNATE_AUDIO_NOT_AUTO_SELECT:
            return "ALTERNATE_AUDIO_NOT_AUTO_SELECT";
          case HlsAudioTrackType::AUDIO_ONLY_VARIANT_STREAM:
            return "AUDIO_ONLY_VARIANT_STREAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HlsAudioTrackTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
