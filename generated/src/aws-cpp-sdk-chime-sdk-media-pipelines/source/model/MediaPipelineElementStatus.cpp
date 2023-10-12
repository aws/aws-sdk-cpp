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

        static constexpr uint32_t NotStarted_HASH = ConstExprHashingUtils::HashString("NotStarted");
        static constexpr uint32_t NotSupported_HASH = ConstExprHashingUtils::HashString("NotSupported");
        static constexpr uint32_t Initializing_HASH = ConstExprHashingUtils::HashString("Initializing");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t Paused_HASH = ConstExprHashingUtils::HashString("Paused");


        MediaPipelineElementStatus GetMediaPipelineElementStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
