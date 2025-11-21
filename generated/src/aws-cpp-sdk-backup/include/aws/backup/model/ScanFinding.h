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
enum class ScanFinding { NOT_SET, MALWARE };

namespace ScanFindingMapper {
AWS_BACKUP_API ScanFinding GetScanFindingForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForScanFinding(ScanFinding value);
}  // namespace ScanFindingMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
