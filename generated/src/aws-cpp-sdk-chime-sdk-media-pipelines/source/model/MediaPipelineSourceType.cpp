/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaPipelineSourceType.h>
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
      namespace MediaPipelineSourceTypeMapper
      {

        static const int ChimeSdkMeeting_HASH = HashingUtils::HashString("ChimeSdkMeeting");


        MediaPipelineSourceType GetMediaPipelineSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ChimeSdkMeeting_HASH)
          {
            return MediaPipelineSourceType::ChimeSdkMeeting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaPipelineSourceType>(hashCode);
          }

          return MediaPipelineSourceType::NOT_SET;
        }

        Aws::String GetNameForMediaPipelineSourceType(MediaPipelineSourceType enumValue)
        {
          switch(enumValue)
          {
          case MediaPipelineSourceType::NOT_SET:
            return {};
          case MediaPipelineSourceType::ChimeSdkMeeting:
            return "ChimeSdkMeeting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaPipelineSourceTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
