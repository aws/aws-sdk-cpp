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
  enum class EnvironmentState
  {
    NOT_SET,
    READY_FOR_DEPLOYMENT,
    DEPLOYING,
    ROLLING_BACK,
    ROLLED_BACK
  };

namespace EnvironmentStateMapper
{
AWS_APPCONFIG_API EnvironmentState GetEnvironmentStateForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForEnvironmentState(EnvironmentState value);
} // namespace EnvironmentStateMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
