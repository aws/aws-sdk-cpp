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

        static const int ConfigurationItemChangeNotification_HASH = HashingUtils::HashString("ConfigurationItemChangeNotification");
        static const int OversizedConfigurationItemChangeNotification_HASH = HashingUtils::HashString("OversizedConfigurationItemChangeNotification");
        static const int ScheduledNotification_HASH = HashingUtils::HashString("ScheduledNotification");


        OrganizationConfigRuleTriggerType GetOrganizationConfigRuleTriggerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
