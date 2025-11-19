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
enum class ScanResourceType { NOT_SET, EBS, EC2, S3 };

namespace ScanResourceTypeMapper {
AWS_BACKUP_API ScanResourceType GetScanResourceTypeForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForScanResourceType(ScanResourceType value);
}  // namespace ScanResourceTypeMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
