/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Transfer {
namespace Model {
enum class HostKeyStorageType { NOT_SET, SERVICE_MANAGED, SECRETS_MANAGER };

namespace HostKeyStorageTypeMapper {
AWS_TRANSFER_API HostKeyStorageType GetHostKeyStorageTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForHostKeyStorageType(HostKeyStorageType value);
}  // namespace HostKeyStorageTypeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
