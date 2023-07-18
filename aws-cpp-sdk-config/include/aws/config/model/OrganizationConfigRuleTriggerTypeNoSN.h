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
  enum class OrganizationConfigRuleTriggerTypeNoSN
  {
    NOT_SET,
    ConfigurationItemChangeNotification,
    OversizedConfigurationItemChangeNotification
  };

namespace OrganizationConfigRuleTriggerTypeNoSNMapper
{
AWS_CONFIGSERVICE_API OrganizationConfigRuleTriggerTypeNoSN GetOrganizationConfigRuleTriggerTypeNoSNForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForOrganizationConfigRuleTriggerTypeNoSN(OrganizationConfigRuleTriggerTypeNoSN value);
} // namespace OrganizationConfigRuleTriggerTypeNoSNMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
