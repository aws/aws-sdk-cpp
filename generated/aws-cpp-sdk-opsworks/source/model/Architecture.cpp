/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/Architecture.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace ArchitectureMapper
      {

        static const int x86_64_HASH = HashingUtils::HashString("x86_64");
        static const int i386_HASH = HashingUtils::HashString("i386");


        Architecture GetArchitectureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == x86_64_HASH)
          {
            return Architecture::x86_64;
          }
          else if (hashCode == i386_HASH)
          {
            return Architecture::i386;
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
          case Architecture::x86_64:
            return "x86_64";
          case Architecture::i386:
            return "i386";
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
  } // namespace OpsWorks
} // namespace Aws
