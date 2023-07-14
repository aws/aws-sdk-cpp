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
          case SupportedRfRegion::EU868:
            return "EU868";
          case SupportedRfRegion::US915:
            return "US915";
          case SupportedRfRegion::AU915:
            return "AU915";
          case SupportedRfRegion::AS923_1:
            return "AS923-1";
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
