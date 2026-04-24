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
enum class TlogAccessMode { NOT_SET, BackupOnly, PreferBackup, PreferTlog, TlogOnly };

namespace TlogAccessModeMapper {
AWS_DATABASEMIGRATIONSERVICE_API TlogAccessMode GetTlogAccessModeForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForTlogAccessMode(TlogAccessMode value);
}  // namespace TlogAccessModeMapper
}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
