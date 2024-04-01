/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CpuArchitectureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace CpuArchitectureTypeMapper
      {

        static const int x86_64_HASH = HashingUtils::HashString("x86_64");
        static const int arm64_HASH = HashingUtils::HashString("arm64");


        CpuArchitectureType GetCpuArchitectureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == x86_64_HASH)
          {
            return CpuArchitectureType::x86_64;
          }
          else if (hashCode == arm64_HASH)
          {
            return CpuArchitectureType::arm64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CpuArchitectureType>(hashCode);
          }

          return CpuArchitectureType::NOT_SET;
        }

        Aws::String GetNameForCpuArchitectureType(CpuArchitectureType enumValue)
        {
          switch(enumValue)
          {
          case CpuArchitectureType::NOT_SET:
            return {};
          case CpuArchitectureType::x86_64:
            return "x86_64";
          case CpuArchitectureType::arm64:
            return "arm64";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CpuArchitectureTypeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
