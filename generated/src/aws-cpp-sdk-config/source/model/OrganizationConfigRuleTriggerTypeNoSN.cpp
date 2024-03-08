/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationConfigRuleTriggerTypeNoSN.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace OrganizationConfigRuleTriggerTypeNoSNMapper
      {

        static const int ConfigurationItemChangeNotification_HASH = HashingUtils::HashString("ConfigurationItemChangeNotification");
        static const int OversizedConfigurationItemChangeNotification_HASH = HashingUtils::HashString("OversizedConfigurationItemChangeNotification");


        OrganizationConfigRuleTriggerTypeNoSN GetOrganizationConfigRuleTriggerTypeNoSNForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ConfigurationItemChangeNotification_HASH)
          {
            return OrganizationConfigRuleTriggerTypeNoSN::ConfigurationItemChangeNotification;
          }
          else if (hashCode == OversizedConfigurationItemChangeNotification_HASH)
          {
            return OrganizationConfigRuleTriggerTypeNoSN::OversizedConfigurationItemChangeNotification;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationConfigRuleTriggerTypeNoSN>(hashCode);
          }

          return OrganizationConfigRuleTriggerTypeNoSN::NOT_SET;
        }

        Aws::String GetNameForOrganizationConfigRuleTriggerTypeNoSN(OrganizationConfigRuleTriggerTypeNoSN enumValue)
        {
          switch(enumValue)
          {
          case OrganizationConfigRuleTriggerTypeNoSN::NOT_SET:
            return {};
          case OrganizationConfigRuleTriggerTypeNoSN::ConfigurationItemChangeNotification:
            return "ConfigurationItemChangeNotification";
          case OrganizationConfigRuleTriggerTypeNoSN::OversizedConfigurationItemChangeNotification:
            return "OversizedConfigurationItemChangeNotification";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationConfigRuleTriggerTypeNoSNMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
