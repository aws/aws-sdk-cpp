/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceBootModeValues.h>
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
      namespace InstanceBootModeValuesMapper
      {

        static const int legacy_bios_HASH = HashingUtils::HashString("legacy-bios");
        static const int uefi_HASH = HashingUtils::HashString("uefi");


        InstanceBootModeValues GetInstanceBootModeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == legacy_bios_HASH)
          {
            return InstanceBootModeValues::legacy_bios;
          }
          else if (hashCode == uefi_HASH)
          {
            return InstanceBootModeValues::uefi;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceBootModeValues>(hashCode);
          }

          return InstanceBootModeValues::NOT_SET;
        }

        Aws::String GetNameForInstanceBootModeValues(InstanceBootModeValues enumValue)
        {
          switch(enumValue)
          {
          case InstanceBootModeValues::NOT_SET:
            return {};
          case InstanceBootModeValues::legacy_bios:
            return "legacy-bios";
          case InstanceBootModeValues::uefi:
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

      } // namespace InstanceBootModeValuesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
