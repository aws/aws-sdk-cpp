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
enum class CollectorStatus { NOT_SET, UNREGISTERED, ACTIVE };

namespace CollectorStatusMapper {
AWS_DATABASEMIGRATIONSERVICE_API CollectorStatus GetCollectorStatusForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForCollectorStatus(CollectorStatus value);
}  // namespace CollectorStatusMapper
}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
