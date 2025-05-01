/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MediaStreamType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace MediaStreamTypeMapper
      {

        static const int AUDIO_HASH = HashingUtils::HashString("AUDIO");
        static const int VIDEO_HASH = HashingUtils::HashString("VIDEO");


        MediaStreamType GetMediaStreamTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUDIO_HASH)
          {
            return MediaStreamType::AUDIO;
          }
          else if (hashCode == VIDEO_HASH)
          {
            return MediaStreamType::VIDEO;
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
          case MediaStreamType::AUDIO:
            return "AUDIO";
          case MediaStreamType::VIDEO:
            return "VIDEO";
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
  } // namespace Connect
} // namespace Aws
