/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageTypeValues.h>
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
      namespace ImageTypeValuesMapper
      {

        static constexpr uint32_t machine_HASH = ConstExprHashingUtils::HashString("machine");
        static constexpr uint32_t kernel_HASH = ConstExprHashingUtils::HashString("kernel");
        static constexpr uint32_t ramdisk_HASH = ConstExprHashingUtils::HashString("ramdisk");


        ImageTypeValues GetImageTypeValuesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == machine_HASH)
          {
            return ImageTypeValues::machine;
          }
          else if (hashCode == kernel_HASH)
          {
            return ImageTypeValues::kernel;
          }
          else if (hashCode == ramdisk_HASH)
          {
            return ImageTypeValues::ramdisk;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageTypeValues>(hashCode);
          }

          return ImageTypeValues::NOT_SET;
        }

        Aws::String GetNameForImageTypeValues(ImageTypeValues enumValue)
        {
          switch(enumValue)
          {
          case ImageTypeValues::NOT_SET:
            return {};
          case ImageTypeValues::machine:
            return "machine";
          case ImageTypeValues::kernel:
            return "kernel";
          case ImageTypeValues::ramdisk:
            return "ramdisk";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageTypeValuesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
