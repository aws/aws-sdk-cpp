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
  enum class DeploymentEventType
  {
    NOT_SET,
    PERCENTAGE_UPDATED,
    ROLLBACK_STARTED,
    ROLLBACK_COMPLETED,
    BAKE_TIME_STARTED,
    DEPLOYMENT_STARTED,
    DEPLOYMENT_COMPLETED
  };

namespace DeploymentEventTypeMapper
{
AWS_APPCONFIG_API DeploymentEventType GetDeploymentEventTypeForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForDeploymentEventType(DeploymentEventType value);
} // namespace DeploymentEventTypeMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
