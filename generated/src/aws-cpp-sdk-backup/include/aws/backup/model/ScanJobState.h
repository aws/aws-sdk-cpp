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
enum class ScanJobState { NOT_SET, COMPLETED, COMPLETED_WITH_ISSUES, FAILED, CANCELED };

namespace ScanJobStateMapper {
AWS_BACKUP_API ScanJobState GetScanJobStateForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForScanJobState(ScanJobState value);
}  // namespace ScanJobStateMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
