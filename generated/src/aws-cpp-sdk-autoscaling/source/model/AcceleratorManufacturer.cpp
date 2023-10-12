/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AcceleratorManufacturer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace AcceleratorManufacturerMapper
      {

        static constexpr uint32_t nvidia_HASH = ConstExprHashingUtils::HashString("nvidia");
        static constexpr uint32_t amd_HASH = ConstExprHashingUtils::HashString("amd");
        static constexpr uint32_t amazon_web_services_HASH = ConstExprHashingUtils::HashString("amazon-web-services");
        static constexpr uint32_t xilinx_HASH = ConstExprHashingUtils::HashString("xilinx");


        AcceleratorManufacturer GetAcceleratorManufacturerForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == nvidia_HASH)
          {
            return AcceleratorManufacturer::nvidia;
          }
          else if (hashCode == amd_HASH)
          {
            return AcceleratorManufacturer::amd;
          }
          else if (hashCode == amazon_web_services_HASH)
          {
            return AcceleratorManufacturer::amazon_web_services;
          }
          else if (hashCode == xilinx_HASH)
          {
            return AcceleratorManufacturer::xilinx;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceleratorManufacturer>(hashCode);
          }

          return AcceleratorManufacturer::NOT_SET;
        }

        Aws::String GetNameForAcceleratorManufacturer(AcceleratorManufacturer enumValue)
        {
          switch(enumValue)
          {
          case AcceleratorManufacturer::NOT_SET:
            return {};
          case AcceleratorManufacturer::nvidia:
            return "nvidia";
          case AcceleratorManufacturer::amd:
            return "amd";
          case AcceleratorManufacturer::amazon_web_services:
            return "amazon-web-services";
          case AcceleratorManufacturer::xilinx:
            return "xilinx";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceleratorManufacturerMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
