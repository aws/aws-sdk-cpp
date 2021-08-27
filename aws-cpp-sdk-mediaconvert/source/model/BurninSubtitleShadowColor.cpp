/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurninSubtitleShadowColor.h>
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
      namespace BurninSubtitleShadowColorMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");


        BurninSubtitleShadowColor GetBurninSubtitleShadowColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return BurninSubtitleShadowColor::NONE;
          }
          else if (hashCode == BLACK_HASH)
          {
            return BurninSubtitleShadowColor::BLACK;
          }
          else if (hashCode == WHITE_HASH)
          {
            return BurninSubtitleShadowColor::WHITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurninSubtitleShadowColor>(hashCode);
          }

          return BurninSubtitleShadowColor::NOT_SET;
        }

        Aws::String GetNameForBurninSubtitleShadowColor(BurninSubtitleShadowColor enumValue)
        {
          switch(enumValue)
          {
          case BurninSubtitleShadowColor::NONE:
            return "NONE";
          case BurninSubtitleShadowColor::BLACK:
            return "BLACK";
          case BurninSubtitleShadowColor::WHITE:
            return "WHITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurninSubtitleShadowColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
