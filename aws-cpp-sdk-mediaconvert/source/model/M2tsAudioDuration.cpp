/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsAudioDuration.h>
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
      namespace M2tsAudioDurationMapper
      {

        static const int DEFAULT_CODEC_DURATION_HASH = HashingUtils::HashString("DEFAULT_CODEC_DURATION");
        static const int MATCH_VIDEO_DURATION_HASH = HashingUtils::HashString("MATCH_VIDEO_DURATION");


        M2tsAudioDuration GetM2tsAudioDurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_CODEC_DURATION_HASH)
          {
            return M2tsAudioDuration::DEFAULT_CODEC_DURATION;
          }
          else if (hashCode == MATCH_VIDEO_DURATION_HASH)
          {
            return M2tsAudioDuration::MATCH_VIDEO_DURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsAudioDuration>(hashCode);
          }

          return M2tsAudioDuration::NOT_SET;
        }

        Aws::String GetNameForM2tsAudioDuration(M2tsAudioDuration enumValue)
        {
          switch(enumValue)
          {
          case M2tsAudioDuration::DEFAULT_CODEC_DURATION:
            return "DEFAULT_CODEC_DURATION";
          case M2tsAudioDuration::MATCH_VIDEO_DURATION:
            return "MATCH_VIDEO_DURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsAudioDurationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
