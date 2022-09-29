/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{
  enum class PluginHealth
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY
  };

namespace PluginHealthMapper
{
AWS_MIGRATIONHUBORCHESTRATOR_API PluginHealth GetPluginHealthForName(const Aws::String& name);

AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String GetNameForPluginHealth(PluginHealth value);
} // namespace PluginHealthMapper
} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
