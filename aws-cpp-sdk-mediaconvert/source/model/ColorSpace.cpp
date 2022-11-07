/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ColorSpace.h>
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
      namespace ColorSpaceMapper
      {

        static const int FOLLOW_HASH = HashingUtils::HashString("FOLLOW");
        static const int REC_601_HASH = HashingUtils::HashString("REC_601");
        static const int REC_709_HASH = HashingUtils::HashString("REC_709");
        static const int HDR10_HASH = HashingUtils::HashString("HDR10");
        static const int HLG_2020_HASH = HashingUtils::HashString("HLG_2020");
        static const int P3DCI_HASH = HashingUtils::HashString("P3DCI");
        static const int P3D65_SDR_HASH = HashingUtils::HashString("P3D65_SDR");


        ColorSpace GetColorSpaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_HASH)
          {
            return ColorSpace::FOLLOW;
          }
          else if (hashCode == REC_601_HASH)
          {
            return ColorSpace::REC_601;
          }
          else if (hashCode == REC_709_HASH)
          {
            return ColorSpace::REC_709;
          }
          else if (hashCode == HDR10_HASH)
          {
            return ColorSpace::HDR10;
          }
          else if (hashCode == HLG_2020_HASH)
          {
            return ColorSpace::HLG_2020;
          }
          else if (hashCode == P3DCI_HASH)
          {
            return ColorSpace::P3DCI;
          }
          else if (hashCode == P3D65_SDR_HASH)
          {
            return ColorSpace::P3D65_SDR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColorSpace>(hashCode);
          }

          return ColorSpace::NOT_SET;
        }

        Aws::String GetNameForColorSpace(ColorSpace enumValue)
        {
          switch(enumValue)
          {
          case ColorSpace::FOLLOW:
            return "FOLLOW";
          case ColorSpace::REC_601:
            return "REC_601";
          case ColorSpace::REC_709:
            return "REC_709";
          case ColorSpace::HDR10:
            return "HDR10";
          case ColorSpace::HLG_2020:
            return "HLG_2020";
          case ColorSpace::P3DCI:
            return "P3DCI";
          case ColorSpace::P3D65_SDR:
            return "P3D65_SDR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColorSpaceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
