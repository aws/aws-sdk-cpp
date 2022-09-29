/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MigrationHubOrchestrator
{
namespace MigrationHubOrchestratorEndpoint
{
AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MigrationHubOrchestratorEndpoint
} // namespace MigrationHubOrchestrator
} // namespace Aws
