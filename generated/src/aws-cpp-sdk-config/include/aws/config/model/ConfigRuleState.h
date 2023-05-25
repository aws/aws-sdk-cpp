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
  enum class ConfigRuleState
  {
    NOT_SET,
    ACTIVE,
    DELETING,
    DELETING_RESULTS,
    EVALUATING
  };

namespace ConfigRuleStateMapper
{
AWS_CONFIGSERVICE_API ConfigRuleState GetConfigRuleStateForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForConfigRuleState(ConfigRuleState value);
} // namespace ConfigRuleStateMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
