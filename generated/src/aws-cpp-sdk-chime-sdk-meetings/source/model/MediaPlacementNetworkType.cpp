/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/MediaPlacementNetworkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMeetings
  {
    namespace Model
    {
      namespace MediaPlacementNetworkTypeMapper
      {

        static const int Ipv4Only_HASH = HashingUtils::HashString("Ipv4Only");
        static const int DualStack_HASH = HashingUtils::HashString("DualStack");


        MediaPlacementNetworkType GetMediaPlacementNetworkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ipv4Only_HASH)
          {
            return MediaPlacementNetworkType::Ipv4Only;
          }
          else if (hashCode == DualStack_HASH)
          {
            return MediaPlacementNetworkType::DualStack;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaPlacementNetworkType>(hashCode);
          }

          return MediaPlacementNetworkType::NOT_SET;
        }

        Aws::String GetNameForMediaPlacementNetworkType(MediaPlacementNetworkType enumValue)
        {
          switch(enumValue)
          {
          case MediaPlacementNetworkType::NOT_SET:
            return {};
          case MediaPlacementNetworkType::Ipv4Only:
            return "Ipv4Only";
          case MediaPlacementNetworkType::DualStack:
            return "DualStack";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaPlacementNetworkTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMeetings
} // namespace Aws
