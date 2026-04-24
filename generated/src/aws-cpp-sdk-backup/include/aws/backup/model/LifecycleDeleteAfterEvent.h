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
enum class LifecycleDeleteAfterEvent { NOT_SET, DELETE_AFTER_COPY };

namespace LifecycleDeleteAfterEventMapper {
AWS_BACKUP_API LifecycleDeleteAfterEvent GetLifecycleDeleteAfterEventForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForLifecycleDeleteAfterEvent(LifecycleDeleteAfterEvent value);
}  // namespace LifecycleDeleteAfterEventMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
