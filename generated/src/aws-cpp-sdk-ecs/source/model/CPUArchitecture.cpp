/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/CPUArchitecture.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace CPUArchitectureMapper
      {

        static constexpr uint32_t X86_64_HASH = ConstExprHashingUtils::HashString("X86_64");
        static constexpr uint32_t ARM64_HASH = ConstExprHashingUtils::HashString("ARM64");


        CPUArchitecture GetCPUArchitectureForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == X86_64_HASH)
          {
            return CPUArchitecture::X86_64;
          }
          else if (hashCode == ARM64_HASH)
          {
            return CPUArchitecture::ARM64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CPUArchitecture>(hashCode);
          }

          return CPUArchitecture::NOT_SET;
        }

        Aws::String GetNameForCPUArchitecture(CPUArchitecture enumValue)
        {
          switch(enumValue)
          {
          case CPUArchitecture::NOT_SET:
            return {};
          case CPUArchitecture::X86_64:
            return "X86_64";
          case CPUArchitecture::ARM64:
            return "ARM64";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CPUArchitectureMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
