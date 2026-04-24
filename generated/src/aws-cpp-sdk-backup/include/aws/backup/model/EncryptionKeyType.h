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
enum class EncryptionKeyType { NOT_SET, AWS_OWNED_KMS_KEY, CUSTOMER_MANAGED_KMS_KEY };

namespace EncryptionKeyTypeMapper {
AWS_BACKUP_API EncryptionKeyType GetEncryptionKeyTypeForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForEncryptionKeyType(EncryptionKeyType value);
}  // namespace EncryptionKeyTypeMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
