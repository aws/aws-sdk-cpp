/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/AudioChannelsOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace AudioChannelsOptionMapper
      {

        static const int Stereo_HASH = HashingUtils::HashString("Stereo");
        static const int Mono_HASH = HashingUtils::HashString("Mono");


        AudioChannelsOption GetAudioChannelsOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Stereo_HASH)
          {
            return AudioChannelsOption::Stereo;
          }
          else if (hashCode == Mono_HASH)
          {
            return AudioChannelsOption::Mono;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioChannelsOption>(hashCode);
          }

          return AudioChannelsOption::NOT_SET;
        }

        Aws::String GetNameForAudioChannelsOption(AudioChannelsOption enumValue)
        {
          switch(enumValue)
          {
          case AudioChannelsOption::Stereo:
            return "Stereo";
          case AudioChannelsOption::Mono:
            return "Mono";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioChannelsOptionMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
