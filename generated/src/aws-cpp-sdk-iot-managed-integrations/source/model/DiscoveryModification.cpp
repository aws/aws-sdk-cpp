/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/DiscoveryModification.h>
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
      namespace DiscoveryModificationMapper
      {

        static const int DISCOVERED_HASH = HashingUtils::HashString("DISCOVERED");
        static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
        static const int NO_CHANGE_HASH = HashingUtils::HashString("NO_CHANGE");


        DiscoveryModification GetDiscoveryModificationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCOVERED_HASH)
          {
            return DiscoveryModification::DISCOVERED;
          }
          else if (hashCode == UPDATED_HASH)
          {
            return DiscoveryModification::UPDATED;
          }
          else if (hashCode == NO_CHANGE_HASH)
          {
            return DiscoveryModification::NO_CHANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiscoveryModification>(hashCode);
          }

          return DiscoveryModification::NOT_SET;
        }

        Aws::String GetNameForDiscoveryModification(DiscoveryModification enumValue)
        {
          switch(enumValue)
          {
          case DiscoveryModification::NOT_SET:
            return {};
          case DiscoveryModification::DISCOVERED:
            return "DISCOVERED";
          case DiscoveryModification::UPDATED:
            return "UPDATED";
          case DiscoveryModification::NO_CHANGE:
            return "NO_CHANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiscoveryModificationMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
