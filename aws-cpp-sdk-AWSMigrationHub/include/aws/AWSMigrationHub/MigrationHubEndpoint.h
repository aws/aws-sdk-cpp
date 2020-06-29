/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MigrationHub
{
namespace MigrationHubEndpoint
{
AWS_MIGRATIONHUB_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MigrationHubEndpoint
} // namespace MigrationHub
} // namespace Aws
