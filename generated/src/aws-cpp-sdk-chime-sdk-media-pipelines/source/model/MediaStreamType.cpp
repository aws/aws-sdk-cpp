/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaStreamType.h>
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
      namespace MediaStreamTypeMapper
      {

        static const int MixedAudio_HASH = HashingUtils::HashString("MixedAudio");
        static const int IndividualAudio_HASH = HashingUtils::HashString("IndividualAudio");


        MediaStreamType GetMediaStreamTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MixedAudio_HASH)
          {
            return MediaStreamType::MixedAudio;
          }
          else if (hashCode == IndividualAudio_HASH)
          {
            return MediaStreamType::IndividualAudio;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaStreamType>(hashCode);
          }

          return MediaStreamType::NOT_SET;
        }

        Aws::String GetNameForMediaStreamType(MediaStreamType enumValue)
        {
          switch(enumValue)
          {
          case MediaStreamType::NOT_SET:
            return {};
          case MediaStreamType::MixedAudio:
            return "MixedAudio";
          case MediaStreamType::IndividualAudio:
            return "IndividualAudio";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaStreamTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
