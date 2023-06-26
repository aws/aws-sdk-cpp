/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/LiveConnectorMuxType.h>
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
      namespace LiveConnectorMuxTypeMapper
      {

        static const int AudioWithCompositedVideo_HASH = HashingUtils::HashString("AudioWithCompositedVideo");
        static const int AudioWithActiveSpeakerVideo_HASH = HashingUtils::HashString("AudioWithActiveSpeakerVideo");


        LiveConnectorMuxType GetLiveConnectorMuxTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AudioWithCompositedVideo_HASH)
          {
            return LiveConnectorMuxType::AudioWithCompositedVideo;
          }
          else if (hashCode == AudioWithActiveSpeakerVideo_HASH)
          {
            return LiveConnectorMuxType::AudioWithActiveSpeakerVideo;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LiveConnectorMuxType>(hashCode);
          }

          return LiveConnectorMuxType::NOT_SET;
        }

        Aws::String GetNameForLiveConnectorMuxType(LiveConnectorMuxType enumValue)
        {
          switch(enumValue)
          {
          case LiveConnectorMuxType::AudioWithCompositedVideo:
            return "AudioWithCompositedVideo";
          case LiveConnectorMuxType::AudioWithActiveSpeakerVideo:
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

      } // namespace LiveConnectorMuxTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
