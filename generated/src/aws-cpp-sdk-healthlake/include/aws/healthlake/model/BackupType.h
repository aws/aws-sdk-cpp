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
enum class BackupType { NOT_SET, CONTINUOUS };

namespace BackupTypeMapper {
AWS_HEALTHLAKE_API BackupType GetBackupTypeForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForBackupType(BackupType value);
}  // namespace BackupTypeMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
