﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/MediaPipelineStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace MediaPipelineStatusMapper
      {

        static const int Initializing_HASH = HashingUtils::HashString("Initializing");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");


        MediaPipelineStatus GetMediaPipelineStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace Chime
} // namespace Aws
