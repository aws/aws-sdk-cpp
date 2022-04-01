/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/AudioArtifactsConcatenationState.h>
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
      namespace AudioArtifactsConcatenationStateMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");


        AudioArtifactsConcatenationState GetAudioArtifactsConcatenationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return AudioArtifactsConcatenationState::Enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioArtifactsConcatenationState>(hashCode);
          }

          return AudioArtifactsConcatenationState::NOT_SET;
        }

        Aws::String GetNameForAudioArtifactsConcatenationState(AudioArtifactsConcatenationState enumValue)
        {
          switch(enumValue)
          {
          case AudioArtifactsConcatenationState::Enabled:
            return "Enabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioArtifactsConcatenationStateMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
