/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/BootModeValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace BootModeValuesMapper
      {

        static const int legacy_bios_HASH = HashingUtils::HashString("legacy-bios");
        static const int uefi_HASH = HashingUtils::HashString("uefi");
        static const int uefi_preferred_HASH = HashingUtils::HashString("uefi-preferred");


        BootModeValues GetBootModeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == legacy_bios_HASH)
          {
            return BootModeValues::legacy_bios;
          }
          else if (hashCode == uefi_HASH)
          {
            return BootModeValues::uefi;
          }
          else if (hashCode == uefi_preferred_HASH)
          {
            return BootModeValues::uefi_preferred;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BootModeValues>(hashCode);
          }

          return BootModeValues::NOT_SET;
        }

        Aws::String GetNameForBootModeValues(BootModeValues enumValue)
        {
          switch(enumValue)
          {
          case BootModeValues::NOT_SET:
            return {};
          case BootModeValues::legacy_bios:
            return "legacy-bios";
          case BootModeValues::uefi:
            return "uefi";
          case BootModeValues::uefi_preferred:
            return "uefi-preferred";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BootModeValuesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
