/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/Permissions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Cloud9
  {
    namespace Model
    {
      namespace PermissionsMapper
      {

        static const int owner_HASH = HashingUtils::HashString("owner");
        static const int read_write_HASH = HashingUtils::HashString("read-write");
        static const int read_only_HASH = HashingUtils::HashString("read-only");


        Permissions GetPermissionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == owner_HASH)
          {
            return Permissions::owner;
          }
          else if (hashCode == read_write_HASH)
          {
            return Permissions::read_write;
          }
          else if (hashCode == read_only_HASH)
          {
            return Permissions::read_only;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Permissions>(hashCode);
          }

          return Permissions::NOT_SET;
        }

        Aws::String GetNameForPermissions(Permissions enumValue)
        {
          switch(enumValue)
          {
          case Permissions::owner:
            return "owner";
          case Permissions::read_write:
            return "read-write";
          case Permissions::read_only:
            return "read-only";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionsMapper
    } // namespace Model
  } // namespace Cloud9
} // namespace Aws
