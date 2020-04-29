/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
