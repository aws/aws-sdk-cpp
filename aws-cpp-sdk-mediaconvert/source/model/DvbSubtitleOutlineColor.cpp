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

#include <aws/mediaconvert/model/DvbSubtitleOutlineColor.h>
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
      namespace DvbSubtitleOutlineColorMapper
      {

        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");
        static const int YELLOW_HASH = HashingUtils::HashString("YELLOW");
        static const int RED_HASH = HashingUtils::HashString("RED");
        static const int GREEN_HASH = HashingUtils::HashString("GREEN");
        static const int BLUE_HASH = HashingUtils::HashString("BLUE");


        DvbSubtitleOutlineColor GetDvbSubtitleOutlineColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return DvbSubtitleOutlineColor::BLACK;
          }
          else if (hashCode == WHITE_HASH)
          {
            return DvbSubtitleOutlineColor::WHITE;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return DvbSubtitleOutlineColor::YELLOW;
          }
          else if (hashCode == RED_HASH)
          {
            return DvbSubtitleOutlineColor::RED;
          }
          else if (hashCode == GREEN_HASH)
          {
            return DvbSubtitleOutlineColor::GREEN;
          }
          else if (hashCode == BLUE_HASH)
          {
            return DvbSubtitleOutlineColor::BLUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleOutlineColor>(hashCode);
          }

          return DvbSubtitleOutlineColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleOutlineColor(DvbSubtitleOutlineColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleOutlineColor::BLACK:
            return "BLACK";
          case DvbSubtitleOutlineColor::WHITE:
            return "WHITE";
          case DvbSubtitleOutlineColor::YELLOW:
            return "YELLOW";
          case DvbSubtitleOutlineColor::RED:
            return "RED";
          case DvbSubtitleOutlineColor::GREEN:
            return "GREEN";
          case DvbSubtitleOutlineColor::BLUE:
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

      } // namespace DvbSubtitleOutlineColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
