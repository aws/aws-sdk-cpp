/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/CpuManufacturer.h>
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
      namespace CpuManufacturerMapper
      {

        static constexpr uint32_t intel_HASH = ConstExprHashingUtils::HashString("intel");
        static constexpr uint32_t amd_HASH = ConstExprHashingUtils::HashString("amd");
        static constexpr uint32_t amazon_web_services_HASH = ConstExprHashingUtils::HashString("amazon-web-services");


        CpuManufacturer GetCpuManufacturerForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == intel_HASH)
          {
            return CpuManufacturer::intel;
          }
          else if (hashCode == amd_HASH)
          {
            return CpuManufacturer::amd;
          }
          else if (hashCode == amazon_web_services_HASH)
          {
            return CpuManufacturer::amazon_web_services;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CpuManufacturer>(hashCode);
          }

          return CpuManufacturer::NOT_SET;
        }

        Aws::String GetNameForCpuManufacturer(CpuManufacturer enumValue)
        {
          switch(enumValue)
          {
          case CpuManufacturer::NOT_SET:
            return {};
          case CpuManufacturer::intel:
            return "intel";
          case CpuManufacturer::amd:
            return "amd";
          case CpuManufacturer::amazon_web_services:
            return "amazon-web-services";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CpuManufacturerMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
