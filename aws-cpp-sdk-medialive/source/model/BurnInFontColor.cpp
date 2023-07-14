/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BurnInFontColor.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace BurnInFontColorMapper
      {

        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int BLUE_HASH = HashingUtils::HashString("BLUE");
        static const int GREEN_HASH = HashingUtils::HashString("GREEN");
        static const int RED_HASH = HashingUtils::HashString("RED");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");
        static const int YELLOW_HASH = HashingUtils::HashString("YELLOW");


        BurnInFontColor GetBurnInFontColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return BurnInFontColor::BLACK;
          }
          else if (hashCode == BLUE_HASH)
          {
            return BurnInFontColor::BLUE;
          }
          else if (hashCode == GREEN_HASH)
          {
            return BurnInFontColor::GREEN;
          }
          else if (hashCode == RED_HASH)
          {
            return BurnInFontColor::RED;
          }
          else if (hashCode == WHITE_HASH)
          {
            return BurnInFontColor::WHITE;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return BurnInFontColor::YELLOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurnInFontColor>(hashCode);
          }

          return BurnInFontColor::NOT_SET;
        }

        Aws::String GetNameForBurnInFontColor(BurnInFontColor enumValue)
        {
          switch(enumValue)
          {
          case BurnInFontColor::BLACK:
            return "BLACK";
          case BurnInFontColor::BLUE:
            return "BLUE";
          case BurnInFontColor::GREEN:
            return "GREEN";
          case BurnInFontColor::RED:
            return "RED";
          case BurnInFontColor::WHITE:
            return "WHITE";
          case BurnInFontColor::YELLOW:
            return "YELLOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurnInFontColorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
