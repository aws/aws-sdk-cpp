/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurninSubtitleBackgroundColor.h>
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
      namespace BurninSubtitleBackgroundColorMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");


        BurninSubtitleBackgroundColor GetBurninSubtitleBackgroundColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return BurninSubtitleBackgroundColor::NONE;
          }
          else if (hashCode == BLACK_HASH)
          {
            return BurninSubtitleBackgroundColor::BLACK;
          }
          else if (hashCode == WHITE_HASH)
          {
            return BurninSubtitleBackgroundColor::WHITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurninSubtitleBackgroundColor>(hashCode);
          }

          return BurninSubtitleBackgroundColor::NOT_SET;
        }

        Aws::String GetNameForBurninSubtitleBackgroundColor(BurninSubtitleBackgroundColor enumValue)
        {
          switch(enumValue)
          {
          case BurninSubtitleBackgroundColor::NONE:
            return "NONE";
          case BurninSubtitleBackgroundColor::BLACK:
            return "BLACK";
          case BurninSubtitleBackgroundColor::WHITE:
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

      } // namespace BurninSubtitleBackgroundColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
