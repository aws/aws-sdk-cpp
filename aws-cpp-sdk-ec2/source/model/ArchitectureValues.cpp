/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ArchitectureValues.h>
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
      namespace ArchitectureValuesMapper
      {

        static const int i386_HASH = HashingUtils::HashString("i386");
        static const int x86_64_HASH = HashingUtils::HashString("x86_64");
        static const int arm64_HASH = HashingUtils::HashString("arm64");
        static const int x86_64_mac_HASH = HashingUtils::HashString("x86_64_mac");
        static const int arm64_mac_HASH = HashingUtils::HashString("arm64_mac");


        ArchitectureValues GetArchitectureValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == i386_HASH)
          {
            return ArchitectureValues::i386;
          }
          else if (hashCode == x86_64_HASH)
          {
            return ArchitectureValues::x86_64;
          }
          else if (hashCode == arm64_HASH)
          {
            return ArchitectureValues::arm64;
          }
          else if (hashCode == x86_64_mac_HASH)
          {
            return ArchitectureValues::x86_64_mac;
          }
          else if (hashCode == arm64_mac_HASH)
          {
            return ArchitectureValues::arm64_mac;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArchitectureValues>(hashCode);
          }

          return ArchitectureValues::NOT_SET;
        }

        Aws::String GetNameForArchitectureValues(ArchitectureValues enumValue)
        {
          switch(enumValue)
          {
          case ArchitectureValues::i386:
            return "i386";
          case ArchitectureValues::x86_64:
            return "x86_64";
          case ArchitectureValues::arm64:
            return "arm64";
          case ArchitectureValues::x86_64_mac:
            return "x86_64_mac";
          case ArchitectureValues::arm64_mac:
            return "arm64_mac";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArchitectureValuesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
