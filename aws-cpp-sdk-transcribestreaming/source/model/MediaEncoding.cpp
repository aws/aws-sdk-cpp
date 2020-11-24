/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeStreamingService
  {
    namespace Model
    {
      namespace MediaEncodingMapper
      {

        static const int pcm_HASH = HashingUtils::HashString("pcm");
        static const int ogg_opus_HASH = HashingUtils::HashString("ogg-opus");
        static const int flac_HASH = HashingUtils::HashString("flac");


        MediaEncoding GetMediaEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pcm_HASH)
          {
            return MediaEncoding::pcm;
          }
          else if (hashCode == ogg_opus_HASH)
          {
            return MediaEncoding::ogg_opus;
          }
          else if (hashCode == flac_HASH)
          {
            return MediaEncoding::flac;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaEncoding>(hashCode);
          }

          return MediaEncoding::NOT_SET;
        }

        Aws::String GetNameForMediaEncoding(MediaEncoding enumValue)
        {
          switch(enumValue)
          {
          case MediaEncoding::pcm:
            return "pcm";
          case MediaEncoding::ogg_opus:
            return "ogg-opus";
          case MediaEncoding::flac:
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

      } // namespace MediaEncodingMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
