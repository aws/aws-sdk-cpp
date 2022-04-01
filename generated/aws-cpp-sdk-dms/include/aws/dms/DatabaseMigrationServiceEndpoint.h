/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace DatabaseMigrationService
{
namespace DatabaseMigrationServiceEndpoint
{
AWS_DATABASEMIGRATIONSERVICE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace DatabaseMigrationServiceEndpoint
} // namespace DatabaseMigrationService
} // namespace Aws
