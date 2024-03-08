/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaStreamPipelineSinkType.h>
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
      namespace MediaStreamPipelineSinkTypeMapper
      {

        static const int KinesisVideoStreamPool_HASH = HashingUtils::HashString("KinesisVideoStreamPool");


        MediaStreamPipelineSinkType GetMediaStreamPipelineSinkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KinesisVideoStreamPool_HASH)
          {
            return MediaStreamPipelineSinkType::KinesisVideoStreamPool;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaStreamPipelineSinkType>(hashCode);
          }

          return MediaStreamPipelineSinkType::NOT_SET;
        }

        Aws::String GetNameForMediaStreamPipelineSinkType(MediaStreamPipelineSinkType enumValue)
        {
          switch(enumValue)
          {
          case MediaStreamPipelineSinkType::NOT_SET:
            return {};
          case MediaStreamPipelineSinkType::KinesisVideoStreamPool:
            return "KinesisVideoStreamPool";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaStreamPipelineSinkTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
