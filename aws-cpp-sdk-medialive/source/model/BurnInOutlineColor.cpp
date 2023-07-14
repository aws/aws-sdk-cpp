/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BurnInOutlineColor.h>
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
      namespace BurnInOutlineColorMapper
      {

        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int BLUE_HASH = HashingUtils::HashString("BLUE");
        static const int GREEN_HASH = HashingUtils::HashString("GREEN");
        static const int RED_HASH = HashingUtils::HashString("RED");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");
        static const int YELLOW_HASH = HashingUtils::HashString("YELLOW");


        BurnInOutlineColor GetBurnInOutlineColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return BurnInOutlineColor::BLACK;
          }
          else if (hashCode == BLUE_HASH)
          {
            return BurnInOutlineColor::BLUE;
          }
          else if (hashCode == GREEN_HASH)
          {
            return BurnInOutlineColor::GREEN;
          }
          else if (hashCode == RED_HASH)
          {
            return BurnInOutlineColor::RED;
          }
          else if (hashCode == WHITE_HASH)
          {
            return BurnInOutlineColor::WHITE;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return BurnInOutlineColor::YELLOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurnInOutlineColor>(hashCode);
          }

          return BurnInOutlineColor::NOT_SET;
        }

        Aws::String GetNameForBurnInOutlineColor(BurnInOutlineColor enumValue)
        {
          switch(enumValue)
          {
          case BurnInOutlineColor::BLACK:
            return "BLACK";
          case BurnInOutlineColor::BLUE:
            return "BLUE";
          case BurnInOutlineColor::GREEN:
            return "GREEN";
          case BurnInOutlineColor::RED:
            return "RED";
          case BurnInOutlineColor::WHITE:
            return "WHITE";
          case BurnInOutlineColor::YELLOW:
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

      } // namespace BurnInOutlineColorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
