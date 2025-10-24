/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {
enum class ReplicationEndpointTypeValue { NOT_SET, source, target };

namespace ReplicationEndpointTypeValueMapper {
AWS_DATABASEMIGRATIONSERVICE_API ReplicationEndpointTypeValue GetReplicationEndpointTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForReplicationEndpointTypeValue(ReplicationEndpointTypeValue value);
}  // namespace ReplicationEndpointTypeValueMapper
}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
