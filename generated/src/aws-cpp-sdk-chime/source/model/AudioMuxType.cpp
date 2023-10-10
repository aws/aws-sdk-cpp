/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AudioMuxType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace AudioMuxTypeMapper
      {

        static const int AudioOnly_HASH = HashingUtils::HashString("AudioOnly");
        static const int AudioWithActiveSpeakerVideo_HASH = HashingUtils::HashString("AudioWithActiveSpeakerVideo");


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
          case AudioMuxType::NOT_SET:
            return {};
          case AudioMuxType::AudioOnly:
            return "AudioOnly";
          case AudioMuxType::AudioWithActiveSpeakerVideo:
            return "AudioWithActiveSpeakerVideo";
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
  } // namespace Chime
} // namespace Aws
