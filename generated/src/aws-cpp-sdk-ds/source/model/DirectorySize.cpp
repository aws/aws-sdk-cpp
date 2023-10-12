/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DirectorySize.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace DirectorySizeMapper
      {

        static constexpr uint32_t Small_HASH = ConstExprHashingUtils::HashString("Small");
        static constexpr uint32_t Large_HASH = ConstExprHashingUtils::HashString("Large");


        DirectorySize GetDirectorySizeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Small_HASH)
          {
            return DirectorySize::Small;
          }
          else if (hashCode == Large_HASH)
          {
            return DirectorySize::Large;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectorySize>(hashCode);
          }

          return DirectorySize::NOT_SET;
        }

        Aws::String GetNameForDirectorySize(DirectorySize enumValue)
        {
          switch(enumValue)
          {
          case DirectorySize::NOT_SET:
            return {};
          case DirectorySize::Small:
            return "Small";
          case DirectorySize::Large:
            return "Large";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectorySizeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
