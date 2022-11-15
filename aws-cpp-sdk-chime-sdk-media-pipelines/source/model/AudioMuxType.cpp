/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/AudioMuxType.h>
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
      namespace AudioMuxTypeMapper
      {

        static const int AudioOnly_HASH = HashingUtils::HashString("AudioOnly");
        static const int AudioWithActiveSpeakerVideo_HASH = HashingUtils::HashString("AudioWithActiveSpeakerVideo");
        static const int AudioWithCompositedVideo_HASH = HashingUtils::HashString("AudioWithCompositedVideo");


        AudioMuxType GetAudioMuxTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AudioOnly_HASH)
          {
            return AudioMuxType::AudioOnly;
          }
          else if (hashCode == AudioWithActiveSpeakerVideo_HASH)
          {
            return AudioMuxType::AudioWithActiveSpeakerVideo;
          }
          else if (hashCode == AudioWithCompositedVideo_HASH)
          {
            return AudioMuxType::AudioWithCompositedVideo;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioMuxType>(hashCode);
          }

          return AudioMuxType::NOT_SET;
        }

        Aws::String GetNameForAudioMuxType(AudioMuxType enumValue)
        {
          switch(enumValue)
          {
          case AudioMuxType::AudioOnly:
            return "AudioOnly";
          case AudioMuxType::AudioWithActiveSpeakerVideo:
            return "AudioWithActiveSpeakerVideo";
          case AudioMuxType::AudioWithCompositedVideo:
            return "AudioWithCompositedVideo";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioMuxTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
