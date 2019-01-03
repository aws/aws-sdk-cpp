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

#include <aws/transcribe/model/MediaFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace MediaFormatMapper
      {

        static const int mp3_HASH = HashingUtils::HashString("mp3");
        static const int mp4_HASH = HashingUtils::HashString("mp4");
        static const int wav_HASH = HashingUtils::HashString("wav");
        static const int flac_HASH = HashingUtils::HashString("flac");


        MediaFormat GetMediaFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == mp3_HASH)
          {
            return MediaFormat::mp3;
          }
          else if (hashCode == mp4_HASH)
          {
            return MediaFormat::mp4;
          }
          else if (hashCode == wav_HASH)
          {
            return MediaFormat::wav;
          }
          else if (hashCode == flac_HASH)
          {
            return MediaFormat::flac;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaFormat>(hashCode);
          }

          return MediaFormat::NOT_SET;
        }

        Aws::String GetNameForMediaFormat(MediaFormat enumValue)
        {
          switch(enumValue)
          {
          case MediaFormat::mp3:
            return "mp3";
          case MediaFormat::mp4:
            return "mp4";
          case MediaFormat::wav:
            return "wav";
          case MediaFormat::flac:
            return "flac";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaFormatMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
