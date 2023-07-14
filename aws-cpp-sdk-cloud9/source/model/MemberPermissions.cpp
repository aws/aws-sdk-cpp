/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/MemberPermissions.h>
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
      namespace MemberPermissionsMapper
      {

        static const int read_write_HASH = HashingUtils::HashString("read-write");
        static const int read_only_HASH = HashingUtils::HashString("read-only");


        MemberPermissions GetMemberPermissionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == read_write_HASH)
          {
            return MemberPermissions::read_write;
          }
          else if (hashCode == read_only_HASH)
          {
            return MemberPermissions::read_only;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberPermissions>(hashCode);
          }

          return MemberPermissions::NOT_SET;
        }

        Aws::String GetNameForMemberPermissions(MemberPermissions enumValue)
        {
          switch(enumValue)
          {
          case MemberPermissions::read_write:
            return "read-write";
          case MemberPermissions::read_only:
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

      } // namespace MemberPermissionsMapper
    } // namespace Model
  } // namespace Cloud9
} // namespace Aws
