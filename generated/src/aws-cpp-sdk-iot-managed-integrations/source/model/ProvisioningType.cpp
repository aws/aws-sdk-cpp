/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ProvisioningType.h>
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
      namespace ProvisioningTypeMapper
      {

        static const int FLEET_PROVISIONING_HASH = HashingUtils::HashString("FLEET_PROVISIONING");
        static const int JITR_HASH = HashingUtils::HashString("JITR");


        ProvisioningType GetProvisioningTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLEET_PROVISIONING_HASH)
          {
            return ProvisioningType::FLEET_PROVISIONING;
          }
          else if (hashCode == JITR_HASH)
          {
            return ProvisioningType::JITR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisioningType>(hashCode);
          }

          return ProvisioningType::NOT_SET;
        }

        Aws::String GetNameForProvisioningType(ProvisioningType enumValue)
        {
          switch(enumValue)
          {
          case ProvisioningType::NOT_SET:
            return {};
          case ProvisioningType::FLEET_PROVISIONING:
            return "FLEET_PROVISIONING";
          case ProvisioningType::JITR:
            return "JITR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisioningTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
