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

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int PERMANENTLY_DISABLED_HASH = HashingUtils::HashString("PERMANENTLY_DISABLED");


        PrivilegedDelete GetPrivilegedDeleteForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
