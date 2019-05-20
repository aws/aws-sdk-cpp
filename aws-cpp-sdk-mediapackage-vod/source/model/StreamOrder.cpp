/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediapackage-vod/model/StreamOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackageVod
  {
    namespace Model
    {
      namespace StreamOrderMapper
      {

        static const int ORIGINAL_HASH = HashingUtils::HashString("ORIGINAL");
        static const int VIDEO_BITRATE_ASCENDING_HASH = HashingUtils::HashString("VIDEO_BITRATE_ASCENDING");
        static const int VIDEO_BITRATE_DESCENDING_HASH = HashingUtils::HashString("VIDEO_BITRATE_DESCENDING");


        StreamOrder GetStreamOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORIGINAL_HASH)
          {
            return StreamOrder::ORIGINAL;
          }
          else if (hashCode == VIDEO_BITRATE_ASCENDING_HASH)
          {
            return StreamOrder::VIDEO_BITRATE_ASCENDING;
          }
          else if (hashCode == VIDEO_BITRATE_DESCENDING_HASH)
          {
            return StreamOrder::VIDEO_BITRATE_DESCENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamOrder>(hashCode);
          }

          return StreamOrder::NOT_SET;
        }

        Aws::String GetNameForStreamOrder(StreamOrder enumValue)
        {
          switch(enumValue)
          {
          case StreamOrder::ORIGINAL:
            return "ORIGINAL";
          case StreamOrder::VIDEO_BITRATE_ASCENDING:
            return "VIDEO_BITRATE_ASCENDING";
          case StreamOrder::VIDEO_BITRATE_DESCENDING:
            return "VIDEO_BITRATE_DESCENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamOrderMapper
    } // namespace Model
  } // namespace MediaPackageVod
} // namespace Aws
