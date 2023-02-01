/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/Architecture.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRServerless
  {
    namespace Model
    {
      namespace ArchitectureMapper
      {

        static const int ARM64_HASH = HashingUtils::HashString("ARM64");
        static const int X86_64_HASH = HashingUtils::HashString("X86_64");


        Architecture GetArchitectureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ARM64_HASH)
          {
            return Architecture::ARM64;
          }
          else if (hashCode == X86_64_HASH)
          {
            return Architecture::X86_64;
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
          case Architecture::ARM64:
            return "ARM64";
          case Architecture::X86_64:
            return "X86_64";
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
  } // namespace EMRServerless
} // namespace Aws
