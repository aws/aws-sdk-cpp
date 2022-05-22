/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MigrationHubRefactorSpaces
{
namespace MigrationHubRefactorSpacesEndpoint
{
AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MigrationHubRefactorSpacesEndpoint
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
