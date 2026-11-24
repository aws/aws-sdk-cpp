/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Bedrock {
namespace Model {
enum class DataRetentionStorageScope { NOT_SET, account, organization, project };

namespace DataRetentionStorageScopeMapper {
AWS_BEDROCK_API DataRetentionStorageScope GetDataRetentionStorageScopeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForDataRetentionStorageScope(DataRetentionStorageScope value);
}  // namespace DataRetentionStorageScopeMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
