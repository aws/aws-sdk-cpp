/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SupportedRfRegion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace SupportedRfRegionMapper
      {

        static const int EU868_HASH = HashingUtils::HashString("EU868");
        static const int US915_HASH = HashingUtils::HashString("US915");
        static const int AU915_HASH = HashingUtils::HashString("AU915");
        static const int AS923_1_HASH = HashingUtils::HashString("AS923-1");
        static const int AS923_2_HASH = HashingUtils::HashString("AS923-2");
        static const int AS923_3_HASH = HashingUtils::HashString("AS923-3");
        static const int AS923_4_HASH = HashingUtils::HashString("AS923-4");
        static const int EU433_HASH = HashingUtils::HashString("EU433");
        static const int CN470_HASH = HashingUtils::HashString("CN470");
        static const int CN779_HASH = HashingUtils::HashString("CN779");
        static const int RU864_HASH = HashingUtils::HashString("RU864");
        static const int KR920_HASH = HashingUtils::HashString("KR920");
        static const int IN865_HASH = HashingUtils::HashString("IN865");


        SupportedRfRegion GetSupportedRfRegionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EU868_HASH)
          {
            return SupportedRfRegion::EU868;
          }
          else if (hashCode == US915_HASH)
          {
            return SupportedRfRegion::US915;
          }
          else if (hashCode == AU915_HASH)
          {
            return SupportedRfRegion::AU915;
          }
          else if (hashCode == AS923_1_HASH)
          {
            return SupportedRfRegion::AS923_1;
          }
          else if (hashCode == AS923_2_HASH)
          {
            return SupportedRfRegion::AS923_2;
          }
          else if (hashCode == AS923_3_HASH)
          {
            return SupportedRfRegion::AS923_3;
          }
          else if (hashCode == AS923_4_HASH)
          {
            return SupportedRfRegion::AS923_4;
          }
          else if (hashCode == EU433_HASH)
          {
            return SupportedRfRegion::EU433;
          }
          else if (hashCode == CN470_HASH)
          {
            return SupportedRfRegion::CN470;
          }
          else if (hashCode == CN779_HASH)
          {
            return SupportedRfRegion::CN779;
          }
          else if (hashCode == RU864_HASH)
          {
            return SupportedRfRegion::RU864;
          }
          else if (hashCode == KR920_HASH)
          {
            return SupportedRfRegion::KR920;
          }
          else if (hashCode == IN865_HASH)
          {
            return SupportedRfRegion::IN865;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupportedRfRegion>(hashCode);
          }

          return SupportedRfRegion::NOT_SET;
        }

        Aws::String GetNameForSupportedRfRegion(SupportedRfRegion enumValue)
        {
          switch(enumValue)
          {
          case SupportedRfRegion::NOT_SET:
            return {};
          case SupportedRfRegion::EU868:
            return "EU868";
          case SupportedRfRegion::US915:
            return "US915";
          case SupportedRfRegion::AU915:
            return "AU915";
          case SupportedRfRegion::AS923_1:
            return "AS923-1";
          case SupportedRfRegion::AS923_2:
            return "AS923-2";
          case SupportedRfRegion::AS923_3:
            return "AS923-3";
          case SupportedRfRegion::AS923_4:
            return "AS923-4";
          case SupportedRfRegion::EU433:
            return "EU433";
          case SupportedRfRegion::CN470:
            return "CN470";
          case SupportedRfRegion::CN779:
            return "CN779";
          case SupportedRfRegion::RU864:
            return "RU864";
          case SupportedRfRegion::KR920:
            return "KR920";
          case SupportedRfRegion::IN865:
            return "IN865";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupportedRfRegionMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
