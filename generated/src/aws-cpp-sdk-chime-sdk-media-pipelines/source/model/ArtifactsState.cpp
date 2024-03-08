/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ArtifactsState.h>
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
      namespace ArtifactsStateMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        ArtifactsState GetArtifactsStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return ArtifactsState::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return ArtifactsState::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArtifactsState>(hashCode);
          }

          return ArtifactsState::NOT_SET;
        }

        Aws::String GetNameForArtifactsState(ArtifactsState enumValue)
        {
          switch(enumValue)
          {
          case ArtifactsState::NOT_SET:
            return {};
          case ArtifactsState::Enabled:
            return "Enabled";
          case ArtifactsState::Disabled:
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

      } // namespace ArtifactsStateMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
