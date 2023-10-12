/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/APIName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace APINameMapper
      {

        static constexpr uint32_t PUT_MEDIA_HASH = ConstExprHashingUtils::HashString("PUT_MEDIA");
        static constexpr uint32_t GET_MEDIA_HASH = ConstExprHashingUtils::HashString("GET_MEDIA");
        static constexpr uint32_t LIST_FRAGMENTS_HASH = ConstExprHashingUtils::HashString("LIST_FRAGMENTS");
        static constexpr uint32_t GET_MEDIA_FOR_FRAGMENT_LIST_HASH = ConstExprHashingUtils::HashString("GET_MEDIA_FOR_FRAGMENT_LIST");
        static constexpr uint32_t GET_HLS_STREAMING_SESSION_URL_HASH = ConstExprHashingUtils::HashString("GET_HLS_STREAMING_SESSION_URL");
        static constexpr uint32_t GET_DASH_STREAMING_SESSION_URL_HASH = ConstExprHashingUtils::HashString("GET_DASH_STREAMING_SESSION_URL");
        static constexpr uint32_t GET_CLIP_HASH = ConstExprHashingUtils::HashString("GET_CLIP");
        static constexpr uint32_t GET_IMAGES_HASH = ConstExprHashingUtils::HashString("GET_IMAGES");


        APIName GetAPINameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUT_MEDIA_HASH)
          {
            return APIName::PUT_MEDIA;
          }
          else if (hashCode == GET_MEDIA_HASH)
          {
            return APIName::GET_MEDIA;
          }
          else if (hashCode == LIST_FRAGMENTS_HASH)
          {
            return APIName::LIST_FRAGMENTS;
          }
          else if (hashCode == GET_MEDIA_FOR_FRAGMENT_LIST_HASH)
          {
            return APIName::GET_MEDIA_FOR_FRAGMENT_LIST;
          }
          else if (hashCode == GET_HLS_STREAMING_SESSION_URL_HASH)
          {
            return APIName::GET_HLS_STREAMING_SESSION_URL;
          }
          else if (hashCode == GET_DASH_STREAMING_SESSION_URL_HASH)
          {
            return APIName::GET_DASH_STREAMING_SESSION_URL;
          }
          else if (hashCode == GET_CLIP_HASH)
          {
            return APIName::GET_CLIP;
          }
          else if (hashCode == GET_IMAGES_HASH)
          {
            return APIName::GET_IMAGES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<APIName>(hashCode);
          }

          return APIName::NOT_SET;
        }

        Aws::String GetNameForAPIName(APIName enumValue)
        {
          switch(enumValue)
          {
          case APIName::NOT_SET:
            return {};
          case APIName::PUT_MEDIA:
            return "PUT_MEDIA";
          case APIName::GET_MEDIA:
            return "GET_MEDIA";
          case APIName::LIST_FRAGMENTS:
            return "LIST_FRAGMENTS";
          case APIName::GET_MEDIA_FOR_FRAGMENT_LIST:
            return "GET_MEDIA_FOR_FRAGMENT_LIST";
          case APIName::GET_HLS_STREAMING_SESSION_URL:
            return "GET_HLS_STREAMING_SESSION_URL";
          case APIName::GET_DASH_STREAMING_SESSION_URL:
            return "GET_DASH_STREAMING_SESSION_URL";
          case APIName::GET_CLIP:
            return "GET_CLIP";
          case APIName::GET_IMAGES:
            return "GET_IMAGES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace APINameMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
