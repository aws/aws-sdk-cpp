/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mp4MoovPlacement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace Mp4MoovPlacementMapper
      {

        static const int PROGRESSIVE_DOWNLOAD_HASH = HashingUtils::HashString("PROGRESSIVE_DOWNLOAD");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        Mp4MoovPlacement GetMp4MoovPlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROGRESSIVE_DOWNLOAD_HASH)
          {
            return Mp4MoovPlacement::PROGRESSIVE_DOWNLOAD;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return Mp4MoovPlacement::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mp4MoovPlacement>(hashCode);
          }

          return Mp4MoovPlacement::NOT_SET;
        }

        Aws::String GetNameForMp4MoovPlacement(Mp4MoovPlacement enumValue)
        {
          switch(enumValue)
          {
          case Mp4MoovPlacement::PROGRESSIVE_DOWNLOAD:
            return "PROGRESSIVE_DOWNLOAD";
          case Mp4MoovPlacement::NORMAL:
            return "NORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mp4MoovPlacementMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
