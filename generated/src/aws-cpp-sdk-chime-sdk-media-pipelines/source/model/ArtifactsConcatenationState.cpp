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

        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");


        ArtifactsConcatenationState GetArtifactsConcatenationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ArtifactsConcatenationState::NOT_SET:
            return {};
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
