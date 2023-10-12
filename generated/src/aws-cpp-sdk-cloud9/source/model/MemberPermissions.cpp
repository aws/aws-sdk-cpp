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

        static constexpr uint32_t read_write_HASH = ConstExprHashingUtils::HashString("read-write");
        static constexpr uint32_t read_only_HASH = ConstExprHashingUtils::HashString("read-only");


        MemberPermissions GetMemberPermissionsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case MemberPermissions::NOT_SET:
            return {};
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
