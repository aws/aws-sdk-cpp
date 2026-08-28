/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws {
namespace HealthLake {
namespace Model {
enum class BackupStatus { NOT_SET, ENABLED, DISABLED };

namespace BackupStatusMapper {
AWS_HEALTHLAKE_API BackupStatus GetBackupStatusForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForBackupStatus(BackupStatus value);
}  // namespace BackupStatusMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
