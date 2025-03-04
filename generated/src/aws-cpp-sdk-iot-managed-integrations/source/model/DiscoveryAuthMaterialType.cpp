/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/DiscoveryAuthMaterialType.h>
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
      namespace DiscoveryAuthMaterialTypeMapper
      {

        static const int ZWAVE_INSTALL_CODE_HASH = HashingUtils::HashString("ZWAVE_INSTALL_CODE");


        DiscoveryAuthMaterialType GetDiscoveryAuthMaterialTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZWAVE_INSTALL_CODE_HASH)
          {
            return DiscoveryAuthMaterialType::ZWAVE_INSTALL_CODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiscoveryAuthMaterialType>(hashCode);
          }

          return DiscoveryAuthMaterialType::NOT_SET;
        }

        Aws::String GetNameForDiscoveryAuthMaterialType(DiscoveryAuthMaterialType enumValue)
        {
          switch(enumValue)
          {
          case DiscoveryAuthMaterialType::NOT_SET:
            return {};
          case DiscoveryAuthMaterialType::ZWAVE_INSTALL_CODE:
            return "ZWAVE_INSTALL_CODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiscoveryAuthMaterialTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
