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
enum class AccessPointStatus { NOT_SET, AVAILABLE, CREATING, DELETING, DISASSOCIATED, DISASSOCIATING, EXPIRED, FAILED };

namespace AccessPointStatusMapper {
AWS_BACKUP_API AccessPointStatus GetAccessPointStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForAccessPointStatus(AccessPointStatus value);
}  // namespace AccessPointStatusMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
