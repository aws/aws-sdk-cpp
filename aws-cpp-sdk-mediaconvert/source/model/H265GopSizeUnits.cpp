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

#include <aws/mediaconvert/model/H265GopSizeUnits.h>
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
      namespace H265GopSizeUnitsMapper
      {

        static const int FRAMES_HASH = HashingUtils::HashString("FRAMES");
        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");


        H265GopSizeUnits GetH265GopSizeUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAMES_HASH)
          {
            return H265GopSizeUnits::FRAMES;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return H265GopSizeUnits::SECONDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265GopSizeUnits>(hashCode);
          }

          return H265GopSizeUnits::NOT_SET;
        }

        Aws::String GetNameForH265GopSizeUnits(H265GopSizeUnits enumValue)
        {
          switch(enumValue)
          {
          case H265GopSizeUnits::FRAMES:
            return "FRAMES";
          case H265GopSizeUnits::SECONDS:
            return "SECONDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace H265GopSizeUnitsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
