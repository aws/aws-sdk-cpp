/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/DiskImageFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace DiskImageFormatMapper
      {

        static constexpr uint32_t VMDK_HASH = ConstExprHashingUtils::HashString("VMDK");
        static constexpr uint32_t RAW_HASH = ConstExprHashingUtils::HashString("RAW");
        static constexpr uint32_t VHD_HASH = ConstExprHashingUtils::HashString("VHD");


        DiskImageFormat GetDiskImageFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VMDK_HASH)
          {
            return DiskImageFormat::VMDK;
          }
          else if (hashCode == RAW_HASH)
          {
            return DiskImageFormat::RAW;
          }
          else if (hashCode == VHD_HASH)
          {
            return DiskImageFormat::VHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiskImageFormat>(hashCode);
          }

          return DiskImageFormat::NOT_SET;
        }

        Aws::String GetNameForDiskImageFormat(DiskImageFormat enumValue)
        {
          switch(enumValue)
          {
          case DiskImageFormat::NOT_SET:
            return {};
          case DiskImageFormat::VMDK:
            return "VMDK";
          case DiskImageFormat::RAW:
            return "RAW";
          case DiskImageFormat::VHD:
            return "VHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiskImageFormatMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
