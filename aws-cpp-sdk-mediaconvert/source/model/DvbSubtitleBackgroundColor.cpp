/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubtitleBackgroundColor.h>
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
      namespace DvbSubtitleBackgroundColorMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");


        DvbSubtitleBackgroundColor GetDvbSubtitleBackgroundColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DvbSubtitleBackgroundColor::NONE;
          }
          else if (hashCode == BLACK_HASH)
          {
            return DvbSubtitleBackgroundColor::BLACK;
          }
          else if (hashCode == WHITE_HASH)
          {
            return DvbSubtitleBackgroundColor::WHITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleBackgroundColor>(hashCode);
          }

          return DvbSubtitleBackgroundColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleBackgroundColor(DvbSubtitleBackgroundColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleBackgroundColor::NONE:
            return "NONE";
          case DvbSubtitleBackgroundColor::BLACK:
            return "BLACK";
          case DvbSubtitleBackgroundColor::WHITE:
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

      } // namespace DvbSubtitleBackgroundColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
