/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ArtifactsConcatenationState.h>
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
      namespace ArtifactsConcatenationStateMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        ArtifactsConcatenationState GetArtifactsConcatenationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return ArtifactsConcatenationState::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return ArtifactsConcatenationState::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArtifactsConcatenationState>(hashCode);
          }

          return ArtifactsConcatenationState::NOT_SET;
        }

        Aws::String GetNameForArtifactsConcatenationState(ArtifactsConcatenationState enumValue)
        {
          switch(enumValue)
          {
          case ArtifactsConcatenationState::Enabled:
            return "Enabled";
          case ArtifactsConcatenationState::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArtifactsConcatenationStateMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
