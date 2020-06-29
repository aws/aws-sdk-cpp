/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoCodec.h>
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
      namespace VideoCodecMapper
      {

        static const int FRAME_CAPTURE_HASH = HashingUtils::HashString("FRAME_CAPTURE");
        static const int AV1_HASH = HashingUtils::HashString("AV1");
        static const int H_264_HASH = HashingUtils::HashString("H_264");
        static const int H_265_HASH = HashingUtils::HashString("H_265");
        static const int MPEG2_HASH = HashingUtils::HashString("MPEG2");
        static const int PRORES_HASH = HashingUtils::HashString("PRORES");
        static const int VP8_HASH = HashingUtils::HashString("VP8");
        static const int VP9_HASH = HashingUtils::HashString("VP9");


        VideoCodec GetVideoCodecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAME_CAPTURE_HASH)
          {
            return VideoCodec::FRAME_CAPTURE;
          }
          else if (hashCode == AV1_HASH)
          {
            return VideoCodec::AV1;
          }
          else if (hashCode == H_264_HASH)
          {
            return VideoCodec::H_264;
          }
          else if (hashCode == H_265_HASH)
          {
            return VideoCodec::H_265;
          }
          else if (hashCode == MPEG2_HASH)
          {
            return VideoCodec::MPEG2;
          }
          else if (hashCode == PRORES_HASH)
          {
            return VideoCodec::PRORES;
          }
          else if (hashCode == VP8_HASH)
          {
            return VideoCodec::VP8;
          }
          else if (hashCode == VP9_HASH)
          {
            return VideoCodec::VP9;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoCodec>(hashCode);
          }

          return VideoCodec::NOT_SET;
        }

        Aws::String GetNameForVideoCodec(VideoCodec enumValue)
        {
          switch(enumValue)
          {
          case VideoCodec::FRAME_CAPTURE:
            return "FRAME_CAPTURE";
          case VideoCodec::AV1:
            return "AV1";
          case VideoCodec::H_264:
            return "H_264";
          case VideoCodec::H_265:
            return "H_265";
          case VideoCodec::MPEG2:
            return "MPEG2";
          case VideoCodec::PRORES:
            return "PRORES";
          case VideoCodec::VP8:
            return "VP8";
          case VideoCodec::VP9:
            return "VP9";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoCodecMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
