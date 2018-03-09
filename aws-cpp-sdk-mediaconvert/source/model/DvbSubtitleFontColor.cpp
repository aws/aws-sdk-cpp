﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediaconvert/model/DvbSubtitleFontColor.h>
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
      namespace DvbSubtitleFontColorMapper
      {

        static const int WHITE_HASH = HashingUtils::HashString("WHITE");
        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int YELLOW_HASH = HashingUtils::HashString("YELLOW");
        static const int RED_HASH = HashingUtils::HashString("RED");
        static const int GREEN_HASH = HashingUtils::HashString("GREEN");
        static const int BLUE_HASH = HashingUtils::HashString("BLUE");


        DvbSubtitleFontColor GetDvbSubtitleFontColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WHITE_HASH)
          {
            return DvbSubtitleFontColor::WHITE;
          }
          else if (hashCode == BLACK_HASH)
          {
            return DvbSubtitleFontColor::BLACK;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return DvbSubtitleFontColor::YELLOW;
          }
          else if (hashCode == RED_HASH)
          {
            return DvbSubtitleFontColor::RED;
          }
          else if (hashCode == GREEN_HASH)
          {
            return DvbSubtitleFontColor::GREEN;
          }
          else if (hashCode == BLUE_HASH)
          {
            return DvbSubtitleFontColor::BLUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleFontColor>(hashCode);
          }

          return DvbSubtitleFontColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleFontColor(DvbSubtitleFontColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleFontColor::WHITE:
            return "WHITE";
          case DvbSubtitleFontColor::BLACK:
            return "BLACK";
          case DvbSubtitleFontColor::YELLOW:
            return "YELLOW";
          case DvbSubtitleFontColor::RED:
            return "RED";
          case DvbSubtitleFontColor::GREEN:
            return "GREEN";
          case DvbSubtitleFontColor::BLUE:
            return "BLUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DvbSubtitleFontColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
