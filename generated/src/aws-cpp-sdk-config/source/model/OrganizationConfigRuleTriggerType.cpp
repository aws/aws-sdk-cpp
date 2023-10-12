/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationConfigRuleTriggerType.h>
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
      namespace OrganizationConfigRuleTriggerTypeMapper
      {

        static constexpr uint32_t ConfigurationItemChangeNotification_HASH = ConstExprHashingUtils::HashString("ConfigurationItemChangeNotification");
        static constexpr uint32_t OversizedConfigurationItemChangeNotification_HASH = ConstExprHashingUtils::HashString("OversizedConfigurationItemChangeNotification");
        static constexpr uint32_t ScheduledNotification_HASH = ConstExprHashingUtils::HashString("ScheduledNotification");


        OrganizationConfigRuleTriggerType GetOrganizationConfigRuleTriggerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ConfigurationItemChangeNotification_HASH)
          {
            return OrganizationConfigRuleTriggerType::ConfigurationItemChangeNotification;
          }
          else if (hashCode == OversizedConfigurationItemChangeNotification_HASH)
          {
            return OrganizationConfigRuleTriggerType::OversizedConfigurationItemChangeNotification;
          }
          else if (hashCode == ScheduledNotification_HASH)
          {
            return OrganizationConfigRuleTriggerType::ScheduledNotification;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationConfigRuleTriggerType>(hashCode);
          }

          return OrganizationConfigRuleTriggerType::NOT_SET;
        }

        Aws::String GetNameForOrganizationConfigRuleTriggerType(OrganizationConfigRuleTriggerType enumValue)
        {
          switch(enumValue)
          {
          case OrganizationConfigRuleTriggerType::NOT_SET:
            return {};
          case OrganizationConfigRuleTriggerType::ConfigurationItemChangeNotification:
            return "ConfigurationItemChangeNotification";
          case OrganizationConfigRuleTriggerType::OversizedConfigurationItemChangeNotification:
            return "OversizedConfigurationItemChangeNotification";
          case OrganizationConfigRuleTriggerType::ScheduledNotification:
            return "ScheduledNotification";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationConfigRuleTriggerTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
