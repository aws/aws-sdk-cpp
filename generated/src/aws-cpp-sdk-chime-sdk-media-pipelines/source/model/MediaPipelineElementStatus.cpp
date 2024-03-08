/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaPipelineElementStatus.h>
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
      namespace MediaPipelineElementStatusMapper
      {

        static const int NotStarted_HASH = HashingUtils::HashString("NotStarted");
        static const int NotSupported_HASH = HashingUtils::HashString("NotSupported");
        static const int Initializing_HASH = HashingUtils::HashString("Initializing");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Paused_HASH = HashingUtils::HashString("Paused");


        MediaPipelineElementStatus GetMediaPipelineElementStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotStarted_HASH)
          {
            return MediaPipelineElementStatus::NotStarted;
          }
          else if (hashCode == NotSupported_HASH)
          {
            return MediaPipelineElementStatus::NotSupported;
          }
          else if (hashCode == Initializing_HASH)
          {
            return MediaPipelineElementStatus::Initializing;
          }
          else if (hashCode == InProgress_HASH)
          {
            return MediaPipelineElementStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return MediaPipelineElementStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return MediaPipelineElementStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return MediaPipelineElementStatus::Stopped;
          }
          else if (hashCode == Paused_HASH)
          {
            return MediaPipelineElementStatus::Paused;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaPipelineElementStatus>(hashCode);
          }

          return MediaPipelineElementStatus::NOT_SET;
        }

        Aws::String GetNameForMediaPipelineElementStatus(MediaPipelineElementStatus enumValue)
        {
          switch(enumValue)
          {
          case MediaPipelineElementStatus::NOT_SET:
            return {};
          case MediaPipelineElementStatus::NotStarted:
            return "NotStarted";
          case MediaPipelineElementStatus::NotSupported:
            return "NotSupported";
          case MediaPipelineElementStatus::Initializing:
            return "Initializing";
          case MediaPipelineElementStatus::InProgress:
            return "InProgress";
          case MediaPipelineElementStatus::Failed:
            return "Failed";
          case MediaPipelineElementStatus::Stopping:
            return "Stopping";
          case MediaPipelineElementStatus::Stopped:
            return "Stopped";
          case MediaPipelineElementStatus::Paused:
            return "Paused";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaPipelineElementStatusMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
