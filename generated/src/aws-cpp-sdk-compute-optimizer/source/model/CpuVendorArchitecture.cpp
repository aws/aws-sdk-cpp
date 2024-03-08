/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/CpuVendorArchitecture.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace CpuVendorArchitectureMapper
      {

        static const int AWS_ARM64_HASH = HashingUtils::HashString("AWS_ARM64");
        static const int CURRENT_HASH = HashingUtils::HashString("CURRENT");


        CpuVendorArchitecture GetCpuVendorArchitectureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_ARM64_HASH)
          {
            return CpuVendorArchitecture::AWS_ARM64;
          }
          else if (hashCode == CURRENT_HASH)
          {
            return CpuVendorArchitecture::CURRENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CpuVendorArchitecture>(hashCode);
          }

          return CpuVendorArchitecture::NOT_SET;
        }

        Aws::String GetNameForCpuVendorArchitecture(CpuVendorArchitecture enumValue)
        {
          switch(enumValue)
          {
          case CpuVendorArchitecture::NOT_SET:
            return {};
          case CpuVendorArchitecture::AWS_ARM64:
            return "AWS_ARM64";
          case CpuVendorArchitecture::CURRENT:
            return "CURRENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CpuVendorArchitectureMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
