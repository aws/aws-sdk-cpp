/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/OrganizationIntegration.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManagerLinuxSubscriptions
  {
    namespace Model
    {
      namespace OrganizationIntegrationMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        OrganizationIntegration GetOrganizationIntegrationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return OrganizationIntegration::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return OrganizationIntegration::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationIntegration>(hashCode);
          }

          return OrganizationIntegration::NOT_SET;
        }

        Aws::String GetNameForOrganizationIntegration(OrganizationIntegration enumValue)
        {
          switch(enumValue)
          {
          case OrganizationIntegration::Enabled:
            return "Enabled";
          case OrganizationIntegration::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationIntegrationMapper
    } // namespace Model
  } // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
