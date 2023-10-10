/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/HighlightColor.h>
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
      namespace HighlightColorMapper
      {

        static const int Black_HASH = HashingUtils::HashString("Black");
        static const int Blue_HASH = HashingUtils::HashString("Blue");
        static const int Red_HASH = HashingUtils::HashString("Red");
        static const int Green_HASH = HashingUtils::HashString("Green");
        static const int White_HASH = HashingUtils::HashString("White");
        static const int Yellow_HASH = HashingUtils::HashString("Yellow");


        HighlightColor GetHighlightColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Black_HASH)
          {
            return HighlightColor::Black;
          }
          else if (hashCode == Blue_HASH)
          {
            return HighlightColor::Blue;
          }
          else if (hashCode == Red_HASH)
          {
            return HighlightColor::Red;
          }
          else if (hashCode == Green_HASH)
          {
            return HighlightColor::Green;
          }
          else if (hashCode == White_HASH)
          {
            return HighlightColor::White;
          }
          else if (hashCode == Yellow_HASH)
          {
            return HighlightColor::Yellow;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HighlightColor>(hashCode);
          }

          return HighlightColor::NOT_SET;
        }

        Aws::String GetNameForHighlightColor(HighlightColor enumValue)
        {
          switch(enumValue)
          {
          case HighlightColor::NOT_SET:
            return {};
          case HighlightColor::Black:
            return "Black";
          case HighlightColor::Blue:
            return "Blue";
          case HighlightColor::Red:
            return "Red";
          case HighlightColor::Green:
            return "Green";
          case HighlightColor::White:
            return "White";
          case HighlightColor::Yellow:
            return "Yellow";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HighlightColorMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
