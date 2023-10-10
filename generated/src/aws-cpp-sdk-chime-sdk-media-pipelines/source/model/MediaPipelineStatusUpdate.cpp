/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaPipelineStatusUpdate.h>
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
      namespace MediaPipelineStatusUpdateMapper
      {

        static const int Pause_HASH = HashingUtils::HashString("Pause");
        static const int Resume_HASH = HashingUtils::HashString("Resume");


        MediaPipelineStatusUpdate GetMediaPipelineStatusUpdateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pause_HASH)
          {
            return MediaPipelineStatusUpdate::Pause;
          }
          else if (hashCode == Resume_HASH)
          {
            return MediaPipelineStatusUpdate::Resume;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaPipelineStatusUpdate>(hashCode);
          }

          return MediaPipelineStatusUpdate::NOT_SET;
        }

        Aws::String GetNameForMediaPipelineStatusUpdate(MediaPipelineStatusUpdate enumValue)
        {
          switch(enumValue)
          {
          case MediaPipelineStatusUpdate::NOT_SET:
            return {};
          case MediaPipelineStatusUpdate::Pause:
            return "Pause";
          case MediaPipelineStatusUpdate::Resume:
            return "Resume";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaPipelineStatusUpdateMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
