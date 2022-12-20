/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TimecodeBurninPosition.h>
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
      namespace TimecodeBurninPositionMapper
      {

        static const int BOTTOM_CENTER_HASH = HashingUtils::HashString("BOTTOM_CENTER");
        static const int BOTTOM_LEFT_HASH = HashingUtils::HashString("BOTTOM_LEFT");
        static const int BOTTOM_RIGHT_HASH = HashingUtils::HashString("BOTTOM_RIGHT");
        static const int MIDDLE_CENTER_HASH = HashingUtils::HashString("MIDDLE_CENTER");
        static const int MIDDLE_LEFT_HASH = HashingUtils::HashString("MIDDLE_LEFT");
        static const int MIDDLE_RIGHT_HASH = HashingUtils::HashString("MIDDLE_RIGHT");
        static const int TOP_CENTER_HASH = HashingUtils::HashString("TOP_CENTER");
        static const int TOP_LEFT_HASH = HashingUtils::HashString("TOP_LEFT");
        static const int TOP_RIGHT_HASH = HashingUtils::HashString("TOP_RIGHT");


        TimecodeBurninPosition GetTimecodeBurninPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOTTOM_CENTER_HASH)
          {
            return TimecodeBurninPosition::BOTTOM_CENTER;
          }
          else if (hashCode == BOTTOM_LEFT_HASH)
          {
            return TimecodeBurninPosition::BOTTOM_LEFT;
          }
          else if (hashCode == BOTTOM_RIGHT_HASH)
          {
            return TimecodeBurninPosition::BOTTOM_RIGHT;
          }
          else if (hashCode == MIDDLE_CENTER_HASH)
          {
            return TimecodeBurninPosition::MIDDLE_CENTER;
          }
          else if (hashCode == MIDDLE_LEFT_HASH)
          {
            return TimecodeBurninPosition::MIDDLE_LEFT;
          }
          else if (hashCode == MIDDLE_RIGHT_HASH)
          {
            return TimecodeBurninPosition::MIDDLE_RIGHT;
          }
          else if (hashCode == TOP_CENTER_HASH)
          {
            return TimecodeBurninPosition::TOP_CENTER;
          }
          else if (hashCode == TOP_LEFT_HASH)
          {
            return TimecodeBurninPosition::TOP_LEFT;
          }
          else if (hashCode == TOP_RIGHT_HASH)
          {
            return TimecodeBurninPosition::TOP_RIGHT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimecodeBurninPosition>(hashCode);
          }

          return TimecodeBurninPosition::NOT_SET;
        }

        Aws::String GetNameForTimecodeBurninPosition(TimecodeBurninPosition enumValue)
        {
          switch(enumValue)
          {
          case TimecodeBurninPosition::BOTTOM_CENTER:
            return "BOTTOM_CENTER";
          case TimecodeBurninPosition::BOTTOM_LEFT:
            return "BOTTOM_LEFT";
          case TimecodeBurninPosition::BOTTOM_RIGHT:
            return "BOTTOM_RIGHT";
          case TimecodeBurninPosition::MIDDLE_CENTER:
            return "MIDDLE_CENTER";
          case TimecodeBurninPosition::MIDDLE_LEFT:
            return "MIDDLE_LEFT";
          case TimecodeBurninPosition::MIDDLE_RIGHT:
            return "MIDDLE_RIGHT";
          case TimecodeBurninPosition::TOP_CENTER:
            return "TOP_CENTER";
          case TimecodeBurninPosition::TOP_LEFT:
            return "TOP_LEFT";
          case TimecodeBurninPosition::TOP_RIGHT:
            return "TOP_RIGHT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimecodeBurninPositionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
