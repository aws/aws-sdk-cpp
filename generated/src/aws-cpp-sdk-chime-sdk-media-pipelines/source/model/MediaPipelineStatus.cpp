/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaPipelineStatus.h>
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
      namespace MediaPipelineStatusMapper
      {

        static constexpr uint32_t Initializing_HASH = ConstExprHashingUtils::HashString("Initializing");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t Paused_HASH = ConstExprHashingUtils::HashString("Paused");
        static constexpr uint32_t NotStarted_HASH = ConstExprHashingUtils::HashString("NotStarted");


        MediaPipelineStatus GetMediaPipelineStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initializing_HASH)
          {
            return MediaPipelineStatus::Initializing;
          }
          else if (hashCode == InProgress_HASH)
          {
            return MediaPipelineStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return MediaPipelineStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return MediaPipelineStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return MediaPipelineStatus::Stopped;
          }
          else if (hashCode == Paused_HASH)
          {
            return MediaPipelineStatus::Paused;
          }
          else if (hashCode == NotStarted_HASH)
          {
            return MediaPipelineStatus::NotStarted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaPipelineStatus>(hashCode);
          }

          return MediaPipelineStatus::NOT_SET;
        }

        Aws::String GetNameForMediaPipelineStatus(MediaPipelineStatus enumValue)
        {
          switch(enumValue)
          {
          case MediaPipelineStatus::NOT_SET:
            return {};
          case MediaPipelineStatus::Initializing:
            return "Initializing";
          case MediaPipelineStatus::InProgress:
            return "InProgress";
          case MediaPipelineStatus::Failed:
            return "Failed";
          case MediaPipelineStatus::Stopping:
            return "Stopping";
          case MediaPipelineStatus::Stopped:
            return "Stopped";
          case MediaPipelineStatus::Paused:
            return "Paused";
          case MediaPipelineStatus::NotStarted:
            return "NotStarted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaPipelineStatusMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
