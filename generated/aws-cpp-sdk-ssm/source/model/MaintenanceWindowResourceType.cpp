/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace MaintenanceWindowResourceTypeMapper
      {

        static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");
        static const int RESOURCE_GROUP_HASH = HashingUtils::HashString("RESOURCE_GROUP");


        MaintenanceWindowResourceType GetMaintenanceWindowResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANCE_HASH)
          {
            return MaintenanceWindowResourceType::INSTANCE;
          }
          else if (hashCode == RESOURCE_GROUP_HASH)
          {
            return MaintenanceWindowResourceType::RESOURCE_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceWindowResourceType>(hashCode);
          }

          return MaintenanceWindowResourceType::NOT_SET;
        }

        Aws::String GetNameForMaintenanceWindowResourceType(MaintenanceWindowResourceType enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceWindowResourceType::INSTANCE:
            return "INSTANCE";
          case MaintenanceWindowResourceType::RESOURCE_GROUP:
            return "RESOURCE_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceWindowResourceTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
