/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/MediaPipelineSinkType.h>
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
      namespace MediaPipelineSinkTypeMapper
      {

        static const int S3Bucket_HASH = HashingUtils::HashString("S3Bucket");


        MediaPipelineSinkType GetMediaPipelineSinkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3Bucket_HASH)
          {
            return MediaPipelineSinkType::S3Bucket;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaPipelineSinkType>(hashCode);
          }

          return MediaPipelineSinkType::NOT_SET;
        }

        Aws::String GetNameForMediaPipelineSinkType(MediaPipelineSinkType enumValue)
        {
          switch(enumValue)
          {
          case MediaPipelineSinkType::NOT_SET:
            return {};
          case MediaPipelineSinkType::S3Bucket:
            return "S3Bucket";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaPipelineSinkTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
