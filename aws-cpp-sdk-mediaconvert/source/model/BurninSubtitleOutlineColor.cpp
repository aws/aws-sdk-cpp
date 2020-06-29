/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurninSubtitleOutlineColor.h>
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
      namespace BurninSubtitleOutlineColorMapper
      {

        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");
        static const int YELLOW_HASH = HashingUtils::HashString("YELLOW");
        static const int RED_HASH = HashingUtils::HashString("RED");
        static const int GREEN_HASH = HashingUtils::HashString("GREEN");
        static const int BLUE_HASH = HashingUtils::HashString("BLUE");


        BurninSubtitleOutlineColor GetBurninSubtitleOutlineColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return BurninSubtitleOutlineColor::BLACK;
          }
          else if (hashCode == WHITE_HASH)
          {
            return BurninSubtitleOutlineColor::WHITE;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return BurninSubtitleOutlineColor::YELLOW;
          }
          else if (hashCode == RED_HASH)
          {
            return BurninSubtitleOutlineColor::RED;
          }
          else if (hashCode == GREEN_HASH)
          {
            return BurninSubtitleOutlineColor::GREEN;
          }
          else if (hashCode == BLUE_HASH)
          {
            return BurninSubtitleOutlineColor::BLUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurninSubtitleOutlineColor>(hashCode);
          }

          return BurninSubtitleOutlineColor::NOT_SET;
        }

        Aws::String GetNameForBurninSubtitleOutlineColor(BurninSubtitleOutlineColor enumValue)
        {
          switch(enumValue)
          {
          case BurninSubtitleOutlineColor::BLACK:
            return "BLACK";
          case BurninSubtitleOutlineColor::WHITE:
            return "WHITE";
          case BurninSubtitleOutlineColor::YELLOW:
            return "YELLOW";
          case BurninSubtitleOutlineColor::RED:
            return "RED";
          case BurninSubtitleOutlineColor::GREEN:
            return "GREEN";
          case BurninSubtitleOutlineColor::BLUE:
            return "BLUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurninSubtitleOutlineColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
