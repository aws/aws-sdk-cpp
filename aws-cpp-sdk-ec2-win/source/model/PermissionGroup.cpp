/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PermissionGroup.h>
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
      namespace PermissionGroupMapper
      {

        static const int all_HASH = HashingUtils::HashString("all");


        PermissionGroup GetPermissionGroupForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == all_HASH)
          {
            return PermissionGroup::all;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionGroup>(hashCode);
          }

          return PermissionGroup::NOT_SET;
        }

        Aws::String GetNameForPermissionGroup(PermissionGroup enumValue)
        {
          switch(enumValue)
          {
          case PermissionGroup::all:
            return "all";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionGroupMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
