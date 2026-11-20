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
enum class DataRetentionStorageModelProvider { NOT_SET, anthropic, openai };

namespace DataRetentionStorageModelProviderMapper {
AWS_BEDROCK_API DataRetentionStorageModelProvider GetDataRetentionStorageModelProviderForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForDataRetentionStorageModelProvider(DataRetentionStorageModelProvider value);
}  // namespace DataRetentionStorageModelProviderMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
