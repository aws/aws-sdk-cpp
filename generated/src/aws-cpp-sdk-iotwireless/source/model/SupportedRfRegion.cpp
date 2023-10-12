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

        static constexpr uint32_t EU868_HASH = ConstExprHashingUtils::HashString("EU868");
        static constexpr uint32_t US915_HASH = ConstExprHashingUtils::HashString("US915");
        static constexpr uint32_t AU915_HASH = ConstExprHashingUtils::HashString("AU915");
        static constexpr uint32_t AS923_1_HASH = ConstExprHashingUtils::HashString("AS923-1");
        static constexpr uint32_t AS923_2_HASH = ConstExprHashingUtils::HashString("AS923-2");
        static constexpr uint32_t AS923_3_HASH = ConstExprHashingUtils::HashString("AS923-3");
        static constexpr uint32_t AS923_4_HASH = ConstExprHashingUtils::HashString("AS923-4");
        static constexpr uint32_t EU433_HASH = ConstExprHashingUtils::HashString("EU433");
        static constexpr uint32_t CN470_HASH = ConstExprHashingUtils::HashString("CN470");
        static constexpr uint32_t CN779_HASH = ConstExprHashingUtils::HashString("CN779");
        static constexpr uint32_t RU864_HASH = ConstExprHashingUtils::HashString("RU864");
        static constexpr uint32_t KR920_HASH = ConstExprHashingUtils::HashString("KR920");
        static constexpr uint32_t IN865_HASH = ConstExprHashingUtils::HashString("IN865");


        SupportedRfRegion GetSupportedRfRegionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
