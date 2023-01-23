/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Permission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace PermissionMapper
      {

        static const int ADMINISTRATOR_HASH = HashingUtils::HashString("ADMINISTRATOR");
        static const int VIEWER_HASH = HashingUtils::HashString("VIEWER");


        Permission GetPermissionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADMINISTRATOR_HASH)
          {
            return Permission::ADMINISTRATOR;
          }
          else if (hashCode == VIEWER_HASH)
          {
            return Permission::VIEWER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Permission>(hashCode);
          }

          return Permission::NOT_SET;
        }

        Aws::String GetNameForPermission(Permission enumValue)
        {
          switch(enumValue)
          {
          case Permission::ADMINISTRATOR:
            return "ADMINISTRATOR";
          case Permission::VIEWER:
            return "VIEWER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
