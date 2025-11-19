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
enum class ScanState { NOT_SET, CANCELED, COMPLETED, COMPLETED_WITH_ISSUES, CREATED, FAILED, RUNNING };

namespace ScanStateMapper {
AWS_BACKUP_API ScanState GetScanStateForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForScanState(ScanState value);
}  // namespace ScanStateMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
