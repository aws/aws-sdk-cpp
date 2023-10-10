/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ResourcePermission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace ResourcePermissionMapper
      {

        static const int FULL_PERMISSION_HASH = HashingUtils::HashString("FULL_PERMISSION");
        static const int MISSING_PERMISSION_HASH = HashingUtils::HashString("MISSING_PERMISSION");


        ResourcePermission GetResourcePermissionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_PERMISSION_HASH)
          {
            return ResourcePermission::FULL_PERMISSION;
          }
          else if (hashCode == MISSING_PERMISSION_HASH)
          {
            return ResourcePermission::MISSING_PERMISSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourcePermission>(hashCode);
          }

          return ResourcePermission::NOT_SET;
        }

        Aws::String GetNameForResourcePermission(ResourcePermission enumValue)
        {
          switch(enumValue)
          {
          case ResourcePermission::NOT_SET:
            return {};
          case ResourcePermission::FULL_PERMISSION:
            return "FULL_PERMISSION";
          case ResourcePermission::MISSING_PERMISSION:
            return "MISSING_PERMISSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourcePermissionMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
