/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/Architecture.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace ArchitectureMapper
      {

        static constexpr uint32_t x86_64_HASH = ConstExprHashingUtils::HashString("x86_64");
        static constexpr uint32_t arm64_HASH = ConstExprHashingUtils::HashString("arm64");


        Architecture GetArchitectureForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == x86_64_HASH)
          {
            return Architecture::x86_64;
          }
          else if (hashCode == arm64_HASH)
          {
            return Architecture::arm64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Architecture>(hashCode);
          }

          return Architecture::NOT_SET;
        }

        Aws::String GetNameForArchitecture(Architecture enumValue)
        {
          switch(enumValue)
          {
          case Architecture::NOT_SET:
            return {};
          case Architecture::x86_64:
            return "x86_64";
          case Architecture::arm64:
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

      } // namespace ArchitectureMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
