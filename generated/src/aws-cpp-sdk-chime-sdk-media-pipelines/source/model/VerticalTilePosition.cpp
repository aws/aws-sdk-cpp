/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/VerticalTilePosition.h>
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
      namespace VerticalTilePositionMapper
      {

        static const int Left_HASH = HashingUtils::HashString("Left");
        static const int Right_HASH = HashingUtils::HashString("Right");


        VerticalTilePosition GetVerticalTilePositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Left_HASH)
          {
            return VerticalTilePosition::Left;
          }
          else if (hashCode == Right_HASH)
          {
            return VerticalTilePosition::Right;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerticalTilePosition>(hashCode);
          }

          return VerticalTilePosition::NOT_SET;
        }

        Aws::String GetNameForVerticalTilePosition(VerticalTilePosition enumValue)
        {
          switch(enumValue)
          {
          case VerticalTilePosition::NOT_SET:
            return {};
          case VerticalTilePosition::Left:
            return "Left";
          case VerticalTilePosition::Right:
            return "Right";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerticalTilePositionMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
