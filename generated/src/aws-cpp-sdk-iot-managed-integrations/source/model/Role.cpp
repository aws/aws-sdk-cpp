/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/Role.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace RoleMapper
      {

        static const int CONTROLLER_HASH = HashingUtils::HashString("CONTROLLER");
        static const int DEVICE_HASH = HashingUtils::HashString("DEVICE");


        Role GetRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTROLLER_HASH)
          {
            return Role::CONTROLLER;
          }
          else if (hashCode == DEVICE_HASH)
          {
            return Role::DEVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Role>(hashCode);
          }

          return Role::NOT_SET;
        }

        Aws::String GetNameForRole(Role enumValue)
        {
          switch(enumValue)
          {
          case Role::NOT_SET:
            return {};
          case Role::CONTROLLER:
            return "CONTROLLER";
          case Role::DEVICE:
            return "DEVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoleMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
