/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/PrivilegedDelete.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace PrivilegedDeleteMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t PERMANENTLY_DISABLED_HASH = ConstExprHashingUtils::HashString("PERMANENTLY_DISABLED");


        PrivilegedDelete GetPrivilegedDeleteForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return PrivilegedDelete::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return PrivilegedDelete::ENABLED;
          }
          else if (hashCode == PERMANENTLY_DISABLED_HASH)
          {
            return PrivilegedDelete::PERMANENTLY_DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrivilegedDelete>(hashCode);
          }

          return PrivilegedDelete::NOT_SET;
        }

        Aws::String GetNameForPrivilegedDelete(PrivilegedDelete enumValue)
        {
          switch(enumValue)
          {
          case PrivilegedDelete::NOT_SET:
            return {};
          case PrivilegedDelete::DISABLED:
            return "DISABLED";
          case PrivilegedDelete::ENABLED:
            return "ENABLED";
          case PrivilegedDelete::PERMANENTLY_DISABLED:
            return "PERMANENTLY_DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrivilegedDeleteMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
