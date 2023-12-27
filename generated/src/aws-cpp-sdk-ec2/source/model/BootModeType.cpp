/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/BootModeType.h>
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
      namespace BootModeTypeMapper
      {

        static const int legacy_bios_HASH = HashingUtils::HashString("legacy-bios");
        static const int uefi_HASH = HashingUtils::HashString("uefi");


        BootModeType GetBootModeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == legacy_bios_HASH)
          {
            return BootModeType::legacy_bios;
          }
          else if (hashCode == uefi_HASH)
          {
            return BootModeType::uefi;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BootModeType>(hashCode);
          }

          return BootModeType::NOT_SET;
        }

        Aws::String GetNameForBootModeType(BootModeType enumValue)
        {
          switch(enumValue)
          {
          case BootModeType::NOT_SET:
            return {};
          case BootModeType::legacy_bios:
            return "legacy-bios";
          case BootModeType::uefi:
            return "uefi";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BootModeTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
