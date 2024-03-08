/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AcceleratorManufacturer.h>
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
      namespace AcceleratorManufacturerMapper
      {

        static const int amazon_web_services_HASH = HashingUtils::HashString("amazon-web-services");
        static const int amd_HASH = HashingUtils::HashString("amd");
        static const int nvidia_HASH = HashingUtils::HashString("nvidia");
        static const int xilinx_HASH = HashingUtils::HashString("xilinx");
        static const int habana_HASH = HashingUtils::HashString("habana");


        AcceleratorManufacturer GetAcceleratorManufacturerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == amazon_web_services_HASH)
          {
            return AcceleratorManufacturer::amazon_web_services;
          }
          else if (hashCode == amd_HASH)
          {
            return AcceleratorManufacturer::amd;
          }
          else if (hashCode == nvidia_HASH)
          {
            return AcceleratorManufacturer::nvidia;
          }
          else if (hashCode == xilinx_HASH)
          {
            return AcceleratorManufacturer::xilinx;
          }
          else if (hashCode == habana_HASH)
          {
            return AcceleratorManufacturer::habana;
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
          case AcceleratorManufacturer::amazon_web_services:
            return "amazon-web-services";
          case AcceleratorManufacturer::amd:
            return "amd";
          case AcceleratorManufacturer::nvidia:
            return "nvidia";
          case AcceleratorManufacturer::xilinx:
            return "xilinx";
          case AcceleratorManufacturer::habana:
            return "habana";
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
  } // namespace EC2
} // namespace Aws
