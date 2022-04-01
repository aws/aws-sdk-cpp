/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int ogg_HASH = HashingUtils::HashString("ogg");
        static const int amr_HASH = HashingUtils::HashString("amr");
        static const int webm_HASH = HashingUtils::HashString("webm");


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
          else if (hashCode == ogg_HASH)
          {
            return MediaFormat::ogg;
          }
          else if (hashCode == amr_HASH)
          {
            return MediaFormat::amr;
          }
          else if (hashCode == webm_HASH)
          {
            return MediaFormat::webm;
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
          case MediaFormat::ogg:
            return "ogg";
          case MediaFormat::amr:
            return "amr";
          case MediaFormat::webm:
            return "webm";
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
