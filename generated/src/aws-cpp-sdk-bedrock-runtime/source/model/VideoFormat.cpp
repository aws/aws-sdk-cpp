/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/VideoFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockRuntime
  {
    namespace Model
    {
      namespace VideoFormatMapper
      {

        static const int mkv_HASH = HashingUtils::HashString("mkv");
        static const int mov_HASH = HashingUtils::HashString("mov");
        static const int mp4_HASH = HashingUtils::HashString("mp4");
        static const int webm_HASH = HashingUtils::HashString("webm");
        static const int flv_HASH = HashingUtils::HashString("flv");
        static const int mpeg_HASH = HashingUtils::HashString("mpeg");
        static const int mpg_HASH = HashingUtils::HashString("mpg");
        static const int wmv_HASH = HashingUtils::HashString("wmv");
        static const int three_gp_HASH = HashingUtils::HashString("three_gp");


        VideoFormat GetVideoFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == mkv_HASH)
          {
            return VideoFormat::mkv;
          }
          else if (hashCode == mov_HASH)
          {
            return VideoFormat::mov;
          }
          else if (hashCode == mp4_HASH)
          {
            return VideoFormat::mp4;
          }
          else if (hashCode == webm_HASH)
          {
            return VideoFormat::webm;
          }
          else if (hashCode == flv_HASH)
          {
            return VideoFormat::flv;
          }
          else if (hashCode == mpeg_HASH)
          {
            return VideoFormat::mpeg;
          }
          else if (hashCode == mpg_HASH)
          {
            return VideoFormat::mpg;
          }
          else if (hashCode == wmv_HASH)
          {
            return VideoFormat::wmv;
          }
          else if (hashCode == three_gp_HASH)
          {
            return VideoFormat::three_gp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoFormat>(hashCode);
          }

          return VideoFormat::NOT_SET;
        }

        Aws::String GetNameForVideoFormat(VideoFormat enumValue)
        {
          switch(enumValue)
          {
          case VideoFormat::NOT_SET:
            return {};
          case VideoFormat::mkv:
            return "mkv";
          case VideoFormat::mov:
            return "mov";
          case VideoFormat::mp4:
            return "mp4";
          case VideoFormat::webm:
            return "webm";
          case VideoFormat::flv:
            return "flv";
          case VideoFormat::mpeg:
            return "mpeg";
          case VideoFormat::mpg:
            return "mpg";
          case VideoFormat::wmv:
            return "wmv";
          case VideoFormat::three_gp:
            return "three_gp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoFormatMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
