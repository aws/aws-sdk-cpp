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

        static const int nvidia_HASH = HashingUtils::HashString("nvidia");
        static const int amd_HASH = HashingUtils::HashString("amd");
        static const int amazon_web_services_HASH = HashingUtils::HashString("amazon-web-services");
        static const int xilinx_HASH = HashingUtils::HashString("xilinx");


        AcceleratorManufacturer GetAcceleratorManufacturerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
