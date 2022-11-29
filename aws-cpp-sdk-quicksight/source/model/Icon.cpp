/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Icon.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace IconMapper
      {

        static const int CARET_UP_HASH = HashingUtils::HashString("CARET_UP");
        static const int CARET_DOWN_HASH = HashingUtils::HashString("CARET_DOWN");
        static const int PLUS_HASH = HashingUtils::HashString("PLUS");
        static const int MINUS_HASH = HashingUtils::HashString("MINUS");
        static const int ARROW_UP_HASH = HashingUtils::HashString("ARROW_UP");
        static const int ARROW_DOWN_HASH = HashingUtils::HashString("ARROW_DOWN");
        static const int ARROW_LEFT_HASH = HashingUtils::HashString("ARROW_LEFT");
        static const int ARROW_UP_LEFT_HASH = HashingUtils::HashString("ARROW_UP_LEFT");
        static const int ARROW_DOWN_LEFT_HASH = HashingUtils::HashString("ARROW_DOWN_LEFT");
        static const int ARROW_RIGHT_HASH = HashingUtils::HashString("ARROW_RIGHT");
        static const int ARROW_UP_RIGHT_HASH = HashingUtils::HashString("ARROW_UP_RIGHT");
        static const int ARROW_DOWN_RIGHT_HASH = HashingUtils::HashString("ARROW_DOWN_RIGHT");
        static const int FACE_UP_HASH = HashingUtils::HashString("FACE_UP");
        static const int FACE_DOWN_HASH = HashingUtils::HashString("FACE_DOWN");
        static const int FACE_FLAT_HASH = HashingUtils::HashString("FACE_FLAT");
        static const int ONE_BAR_HASH = HashingUtils::HashString("ONE_BAR");
        static const int TWO_BAR_HASH = HashingUtils::HashString("TWO_BAR");
        static const int THREE_BAR_HASH = HashingUtils::HashString("THREE_BAR");
        static const int CIRCLE_HASH = HashingUtils::HashString("CIRCLE");
        static const int TRIANGLE_HASH = HashingUtils::HashString("TRIANGLE");
        static const int SQUARE_HASH = HashingUtils::HashString("SQUARE");
        static const int FLAG_HASH = HashingUtils::HashString("FLAG");
        static const int THUMBS_UP_HASH = HashingUtils::HashString("THUMBS_UP");
        static const int THUMBS_DOWN_HASH = HashingUtils::HashString("THUMBS_DOWN");
        static const int CHECKMARK_HASH = HashingUtils::HashString("CHECKMARK");
        static const int X_HASH = HashingUtils::HashString("X");


        Icon GetIconForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CARET_UP_HASH)
          {
            return Icon::CARET_UP;
          }
          else if (hashCode == CARET_DOWN_HASH)
          {
            return Icon::CARET_DOWN;
          }
          else if (hashCode == PLUS_HASH)
          {
            return Icon::PLUS;
          }
          else if (hashCode == MINUS_HASH)
          {
            return Icon::MINUS;
          }
          else if (hashCode == ARROW_UP_HASH)
          {
            return Icon::ARROW_UP;
          }
          else if (hashCode == ARROW_DOWN_HASH)
          {
            return Icon::ARROW_DOWN;
          }
          else if (hashCode == ARROW_LEFT_HASH)
          {
            return Icon::ARROW_LEFT;
          }
          else if (hashCode == ARROW_UP_LEFT_HASH)
          {
            return Icon::ARROW_UP_LEFT;
          }
          else if (hashCode == ARROW_DOWN_LEFT_HASH)
          {
            return Icon::ARROW_DOWN_LEFT;
          }
          else if (hashCode == ARROW_RIGHT_HASH)
          {
            return Icon::ARROW_RIGHT;
          }
          else if (hashCode == ARROW_UP_RIGHT_HASH)
          {
            return Icon::ARROW_UP_RIGHT;
          }
          else if (hashCode == ARROW_DOWN_RIGHT_HASH)
          {
            return Icon::ARROW_DOWN_RIGHT;
          }
          else if (hashCode == FACE_UP_HASH)
          {
            return Icon::FACE_UP;
          }
          else if (hashCode == FACE_DOWN_HASH)
          {
            return Icon::FACE_DOWN;
          }
          else if (hashCode == FACE_FLAT_HASH)
          {
            return Icon::FACE_FLAT;
          }
          else if (hashCode == ONE_BAR_HASH)
          {
            return Icon::ONE_BAR;
          }
          else if (hashCode == TWO_BAR_HASH)
          {
            return Icon::TWO_BAR;
          }
          else if (hashCode == THREE_BAR_HASH)
          {
            return Icon::THREE_BAR;
          }
          else if (hashCode == CIRCLE_HASH)
          {
            return Icon::CIRCLE;
          }
          else if (hashCode == TRIANGLE_HASH)
          {
            return Icon::TRIANGLE;
          }
          else if (hashCode == SQUARE_HASH)
          {
            return Icon::SQUARE;
          }
          else if (hashCode == FLAG_HASH)
          {
            return Icon::FLAG;
          }
          else if (hashCode == THUMBS_UP_HASH)
          {
            return Icon::THUMBS_UP;
          }
          else if (hashCode == THUMBS_DOWN_HASH)
          {
            return Icon::THUMBS_DOWN;
          }
          else if (hashCode == CHECKMARK_HASH)
          {
            return Icon::CHECKMARK;
          }
          else if (hashCode == X_HASH)
          {
            return Icon::X;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Icon>(hashCode);
          }

          return Icon::NOT_SET;
        }

        Aws::String GetNameForIcon(Icon enumValue)
        {
          switch(enumValue)
          {
          case Icon::CARET_UP:
            return "CARET_UP";
          case Icon::CARET_DOWN:
            return "CARET_DOWN";
          case Icon::PLUS:
            return "PLUS";
          case Icon::MINUS:
            return "MINUS";
          case Icon::ARROW_UP:
            return "ARROW_UP";
          case Icon::ARROW_DOWN:
            return "ARROW_DOWN";
          case Icon::ARROW_LEFT:
            return "ARROW_LEFT";
          case Icon::ARROW_UP_LEFT:
            return "ARROW_UP_LEFT";
          case Icon::ARROW_DOWN_LEFT:
            return "ARROW_DOWN_LEFT";
          case Icon::ARROW_RIGHT:
            return "ARROW_RIGHT";
          case Icon::ARROW_UP_RIGHT:
            return "ARROW_UP_RIGHT";
          case Icon::ARROW_DOWN_RIGHT:
            return "ARROW_DOWN_RIGHT";
          case Icon::FACE_UP:
            return "FACE_UP";
          case Icon::FACE_DOWN:
            return "FACE_DOWN";
          case Icon::FACE_FLAT:
            return "FACE_FLAT";
          case Icon::ONE_BAR:
            return "ONE_BAR";
          case Icon::TWO_BAR:
            return "TWO_BAR";
          case Icon::THREE_BAR:
            return "THREE_BAR";
          case Icon::CIRCLE:
            return "CIRCLE";
          case Icon::TRIANGLE:
            return "TRIANGLE";
          case Icon::SQUARE:
            return "SQUARE";
          case Icon::FLAG:
            return "FLAG";
          case Icon::THUMBS_UP:
            return "THUMBS_UP";
          case Icon::THUMBS_DOWN:
            return "THUMBS_DOWN";
          case Icon::CHECKMARK:
            return "CHECKMARK";
          case Icon::X:
            return "X";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IconMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
