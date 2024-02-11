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

        static const int intel_HASH = HashingUtils::HashString("intel");
        static const int amd_HASH = HashingUtils::HashString("amd");
        static const int amazon_web_services_HASH = HashingUtils::HashString("amazon-web-services");


        CpuManufacturer GetCpuManufacturerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
