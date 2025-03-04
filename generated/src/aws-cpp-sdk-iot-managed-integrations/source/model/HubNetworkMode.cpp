/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/HubNetworkMode.h>
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
      namespace HubNetworkModeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int NETWORK_WIDE_EXCLUSION_HASH = HashingUtils::HashString("NETWORK_WIDE_EXCLUSION");


        HubNetworkMode GetHubNetworkModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return HubNetworkMode::STANDARD;
          }
          else if (hashCode == NETWORK_WIDE_EXCLUSION_HASH)
          {
            return HubNetworkMode::NETWORK_WIDE_EXCLUSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HubNetworkMode>(hashCode);
          }

          return HubNetworkMode::NOT_SET;
        }

        Aws::String GetNameForHubNetworkMode(HubNetworkMode enumValue)
        {
          switch(enumValue)
          {
          case HubNetworkMode::NOT_SET:
            return {};
          case HubNetworkMode::STANDARD:
            return "STANDARD";
          case HubNetworkMode::NETWORK_WIDE_EXCLUSION:
            return "NETWORK_WIDE_EXCLUSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HubNetworkModeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
