/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Backup {
namespace Model {
enum class ScanMode { NOT_SET, FULL_SCAN, INCREMENTAL_SCAN };

namespace ScanModeMapper {
AWS_BACKUP_API ScanMode GetScanModeForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForScanMode(ScanMode value);
}  // namespace ScanModeMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
