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

#include <aws/mediaconvert/model/ColorSpaceConversion.h>
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
      namespace ColorSpaceConversionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int FORCE_601_HASH = HashingUtils::HashString("FORCE_601");
        static const int FORCE_709_HASH = HashingUtils::HashString("FORCE_709");
        static const int FORCE_HDR10_HASH = HashingUtils::HashString("FORCE_HDR10");
        static const int FORCE_HLG_2020_HASH = HashingUtils::HashString("FORCE_HLG_2020");


        ColorSpaceConversion GetColorSpaceConversionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ColorSpaceConversion::NONE;
          }
          else if (hashCode == FORCE_601_HASH)
          {
            return ColorSpaceConversion::FORCE_601;
          }
          else if (hashCode == FORCE_709_HASH)
          {
            return ColorSpaceConversion::FORCE_709;
          }
          else if (hashCode == FORCE_HDR10_HASH)
          {
            return ColorSpaceConversion::FORCE_HDR10;
          }
          else if (hashCode == FORCE_HLG_2020_HASH)
          {
            return ColorSpaceConversion::FORCE_HLG_2020;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColorSpaceConversion>(hashCode);
          }

          return ColorSpaceConversion::NOT_SET;
        }

        Aws::String GetNameForColorSpaceConversion(ColorSpaceConversion enumValue)
        {
          switch(enumValue)
          {
          case ColorSpaceConversion::NONE:
            return "NONE";
          case ColorSpaceConversion::FORCE_601:
            return "FORCE_601";
          case ColorSpaceConversion::FORCE_709:
            return "FORCE_709";
          case ColorSpaceConversion::FORCE_HDR10:
            return "FORCE_HDR10";
          case ColorSpaceConversion::FORCE_HLG_2020:
            return "FORCE_HLG_2020";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ColorSpaceConversionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
