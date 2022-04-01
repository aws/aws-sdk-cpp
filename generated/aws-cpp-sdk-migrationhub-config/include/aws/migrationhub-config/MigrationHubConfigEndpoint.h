/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MigrationHubConfig
{
namespace MigrationHubConfigEndpoint
{
AWS_MIGRATIONHUBCONFIG_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MigrationHubConfigEndpoint
} // namespace MigrationHubConfig
} // namespace Aws
