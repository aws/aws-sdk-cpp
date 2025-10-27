/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>

namespace Aws {
namespace DataSync {
namespace Model {
enum class NfsVersion { NOT_SET, AUTOMATIC, NFS3, NFS4_0, NFS4_1 };

namespace NfsVersionMapper {
AWS_DATASYNC_API NfsVersion GetNfsVersionForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForNfsVersion(NfsVersion value);
}  // namespace NfsVersionMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
