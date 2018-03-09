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

#include <aws/mediaconvert/model/BurninSubtitleTeletextSpacing.h>
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
      namespace BurninSubtitleTeletextSpacingMapper
      {

        static const int FIXED_GRID_HASH = HashingUtils::HashString("FIXED_GRID");
        static const int PROPORTIONAL_HASH = HashingUtils::HashString("PROPORTIONAL");


        BurninSubtitleTeletextSpacing GetBurninSubtitleTeletextSpacingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_GRID_HASH)
          {
            return BurninSubtitleTeletextSpacing::FIXED_GRID;
          }
          else if (hashCode == PROPORTIONAL_HASH)
          {
            return BurninSubtitleTeletextSpacing::PROPORTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurninSubtitleTeletextSpacing>(hashCode);
          }

          return BurninSubtitleTeletextSpacing::NOT_SET;
        }

        Aws::String GetNameForBurninSubtitleTeletextSpacing(BurninSubtitleTeletextSpacing enumValue)
        {
          switch(enumValue)
          {
          case BurninSubtitleTeletextSpacing::FIXED_GRID:
            return "FIXED_GRID";
          case BurninSubtitleTeletextSpacing::PROPORTIONAL:
            return "PROPORTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace BurninSubtitleTeletextSpacingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
