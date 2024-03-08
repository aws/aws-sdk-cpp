/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaPipelineTaskStatus.h>
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
      namespace MediaPipelineTaskStatusMapper
      {

        static const int NotStarted_HASH = HashingUtils::HashString("NotStarted");
        static const int Initializing_HASH = HashingUtils::HashString("Initializing");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");


        MediaPipelineTaskStatus GetMediaPipelineTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotStarted_HASH)
          {
            return MediaPipelineTaskStatus::NotStarted;
          }
          else if (hashCode == Initializing_HASH)
          {
            return MediaPipelineTaskStatus::Initializing;
          }
          else if (hashCode == InProgress_HASH)
          {
            return MediaPipelineTaskStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return MediaPipelineTaskStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return MediaPipelineTaskStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return MediaPipelineTaskStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaPipelineTaskStatus>(hashCode);
          }

          return MediaPipelineTaskStatus::NOT_SET;
        }

        Aws::String GetNameForMediaPipelineTaskStatus(MediaPipelineTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case MediaPipelineTaskStatus::NOT_SET:
            return {};
          case MediaPipelineTaskStatus::NotStarted:
            return "NotStarted";
          case MediaPipelineTaskStatus::Initializing:
            return "Initializing";
          case MediaPipelineTaskStatus::InProgress:
            return "InProgress";
          case MediaPipelineTaskStatus::Failed:
            return "Failed";
          case MediaPipelineTaskStatus::Stopping:
            return "Stopping";
          case MediaPipelineTaskStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaPipelineTaskStatusMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
