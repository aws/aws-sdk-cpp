/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class BackupType { NOT_SET, AUTOMATIC, USER_INITIATED, AWS_BACKUP };

namespace BackupTypeMapper {
AWS_FSX_API BackupType GetBackupTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForBackupType(BackupType value);
}  // namespace BackupTypeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
