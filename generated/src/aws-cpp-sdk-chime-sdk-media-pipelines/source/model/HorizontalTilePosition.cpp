/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/HorizontalTilePosition.h>
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
      namespace HorizontalTilePositionMapper
      {

        static constexpr uint32_t Top_HASH = ConstExprHashingUtils::HashString("Top");
        static constexpr uint32_t Bottom_HASH = ConstExprHashingUtils::HashString("Bottom");


        HorizontalTilePosition GetHorizontalTilePositionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Top_HASH)
          {
            return HorizontalTilePosition::Top;
          }
          else if (hashCode == Bottom_HASH)
          {
            return HorizontalTilePosition::Bottom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HorizontalTilePosition>(hashCode);
          }

          return HorizontalTilePosition::NOT_SET;
        }

        Aws::String GetNameForHorizontalTilePosition(HorizontalTilePosition enumValue)
        {
          switch(enumValue)
          {
          case HorizontalTilePosition::NOT_SET:
            return {};
          case HorizontalTilePosition::Top:
            return "Top";
          case HorizontalTilePosition::Bottom:
            return "Bottom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HorizontalTilePositionMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
