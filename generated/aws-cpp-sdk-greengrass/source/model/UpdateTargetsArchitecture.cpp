/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/UpdateTargetsArchitecture.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace UpdateTargetsArchitectureMapper
      {

        static const int armv6l_HASH = HashingUtils::HashString("armv6l");
        static const int armv7l_HASH = HashingUtils::HashString("armv7l");
        static const int x86_64_HASH = HashingUtils::HashString("x86_64");
        static const int aarch64_HASH = HashingUtils::HashString("aarch64");


        UpdateTargetsArchitecture GetUpdateTargetsArchitectureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == armv6l_HASH)
          {
            return UpdateTargetsArchitecture::armv6l;
          }
          else if (hashCode == armv7l_HASH)
          {
            return UpdateTargetsArchitecture::armv7l;
          }
          else if (hashCode == x86_64_HASH)
          {
            return UpdateTargetsArchitecture::x86_64;
          }
          else if (hashCode == aarch64_HASH)
          {
            return UpdateTargetsArchitecture::aarch64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateTargetsArchitecture>(hashCode);
          }

          return UpdateTargetsArchitecture::NOT_SET;
        }

        Aws::String GetNameForUpdateTargetsArchitecture(UpdateTargetsArchitecture enumValue)
        {
          switch(enumValue)
          {
          case UpdateTargetsArchitecture::armv6l:
            return "armv6l";
          case UpdateTargetsArchitecture::armv7l:
            return "armv7l";
          case UpdateTargetsArchitecture::x86_64:
            return "x86_64";
          case UpdateTargetsArchitecture::aarch64:
            return "aarch64";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateTargetsArchitectureMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
