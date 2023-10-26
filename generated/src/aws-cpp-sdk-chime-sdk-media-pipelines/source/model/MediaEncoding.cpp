/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaEncoding.h>
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
      namespace MediaEncodingMapper
      {

        static const int pcm_HASH = HashingUtils::HashString("pcm");


        MediaEncoding GetMediaEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pcm_HASH)
          {
            return MediaEncoding::pcm;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaEncoding>(hashCode);
          }

          return MediaEncoding::NOT_SET;
        }

        Aws::String GetNameForMediaEncoding(MediaEncoding enumValue)
        {
          switch(enumValue)
          {
          case MediaEncoding::NOT_SET:
            return {};
          case MediaEncoding::pcm:
            return "pcm";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaEncodingMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
