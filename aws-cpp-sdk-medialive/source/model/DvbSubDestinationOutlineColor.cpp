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

#include <aws/medialive/model/DvbSubDestinationOutlineColor.h>
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
      namespace DvbSubDestinationOutlineColorMapper
      {

        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int BLUE_HASH = HashingUtils::HashString("BLUE");
        static const int GREEN_HASH = HashingUtils::HashString("GREEN");
        static const int RED_HASH = HashingUtils::HashString("RED");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");
        static const int YELLOW_HASH = HashingUtils::HashString("YELLOW");


        DvbSubDestinationOutlineColor GetDvbSubDestinationOutlineColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return DvbSubDestinationOutlineColor::BLACK;
          }
          else if (hashCode == BLUE_HASH)
          {
            return DvbSubDestinationOutlineColor::BLUE;
          }
          else if (hashCode == GREEN_HASH)
          {
            return DvbSubDestinationOutlineColor::GREEN;
          }
          else if (hashCode == RED_HASH)
          {
            return DvbSubDestinationOutlineColor::RED;
          }
          else if (hashCode == WHITE_HASH)
          {
            return DvbSubDestinationOutlineColor::WHITE;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return DvbSubDestinationOutlineColor::YELLOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubDestinationOutlineColor>(hashCode);
          }

          return DvbSubDestinationOutlineColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubDestinationOutlineColor(DvbSubDestinationOutlineColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubDestinationOutlineColor::BLACK:
            return "BLACK";
          case DvbSubDestinationOutlineColor::BLUE:
            return "BLUE";
          case DvbSubDestinationOutlineColor::GREEN:
            return "GREEN";
          case DvbSubDestinationOutlineColor::RED:
            return "RED";
          case DvbSubDestinationOutlineColor::WHITE:
            return "WHITE";
          case DvbSubDestinationOutlineColor::YELLOW:
            return "YELLOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DvbSubDestinationOutlineColorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
