/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class OrganizationConfigRuleTriggerType
  {
    NOT_SET,
    ConfigurationItemChangeNotification,
    OversizedConfigurationItemChangeNotification,
    ScheduledNotification
  };

namespace OrganizationConfigRuleTriggerTypeMapper
{
AWS_CONFIGSERVICE_API OrganizationConfigRuleTriggerType GetOrganizationConfigRuleTriggerTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForOrganizationConfigRuleTriggerType(OrganizationConfigRuleTriggerType value);
} // namespace OrganizationConfigRuleTriggerTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
