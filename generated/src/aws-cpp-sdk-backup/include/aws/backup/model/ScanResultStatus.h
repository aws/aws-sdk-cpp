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
enum class ScanResultStatus { NOT_SET, NO_THREATS_FOUND, THREATS_FOUND };

namespace ScanResultStatusMapper {
AWS_BACKUP_API ScanResultStatus GetScanResultStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForScanResultStatus(ScanResultStatus value);
}  // namespace ScanResultStatusMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
