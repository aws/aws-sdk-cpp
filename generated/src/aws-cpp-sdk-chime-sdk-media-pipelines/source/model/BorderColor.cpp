/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/BorderColor.h>
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
      namespace BorderColorMapper
      {

        static constexpr uint32_t Black_HASH = ConstExprHashingUtils::HashString("Black");
        static constexpr uint32_t Blue_HASH = ConstExprHashingUtils::HashString("Blue");
        static constexpr uint32_t Red_HASH = ConstExprHashingUtils::HashString("Red");
        static constexpr uint32_t Green_HASH = ConstExprHashingUtils::HashString("Green");
        static constexpr uint32_t White_HASH = ConstExprHashingUtils::HashString("White");
        static constexpr uint32_t Yellow_HASH = ConstExprHashingUtils::HashString("Yellow");


        BorderColor GetBorderColorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Black_HASH)
          {
            return BorderColor::Black;
          }
          else if (hashCode == Blue_HASH)
          {
            return BorderColor::Blue;
          }
          else if (hashCode == Red_HASH)
          {
            return BorderColor::Red;
          }
          else if (hashCode == Green_HASH)
          {
            return BorderColor::Green;
          }
          else if (hashCode == White_HASH)
          {
            return BorderColor::White;
          }
          else if (hashCode == Yellow_HASH)
          {
            return BorderColor::Yellow;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BorderColor>(hashCode);
          }

          return BorderColor::NOT_SET;
        }

        Aws::String GetNameForBorderColor(BorderColor enumValue)
        {
          switch(enumValue)
          {
          case BorderColor::NOT_SET:
            return {};
          case BorderColor::Black:
            return "Black";
          case BorderColor::Blue:
            return "Blue";
          case BorderColor::Red:
            return "Red";
          case BorderColor::Green:
            return "Green";
          case BorderColor::White:
            return "White";
          case BorderColor::Yellow:
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

      } // namespace BorderColorMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
