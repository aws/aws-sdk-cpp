/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppConfig
{
namespace Model
{
  enum class ActionPoint
  {
    NOT_SET,
    PRE_CREATE_HOSTED_CONFIGURATION_VERSION,
    PRE_START_DEPLOYMENT,
    ON_DEPLOYMENT_START,
    ON_DEPLOYMENT_STEP,
    ON_DEPLOYMENT_BAKING,
    ON_DEPLOYMENT_COMPLETE,
    ON_DEPLOYMENT_ROLLED_BACK
  };

namespace ActionPointMapper
{
AWS_APPCONFIG_API ActionPoint GetActionPointForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForActionPoint(ActionPoint value);
} // namespace ActionPointMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
