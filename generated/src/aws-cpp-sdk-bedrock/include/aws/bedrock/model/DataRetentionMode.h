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
enum class DataRetentionMode { NOT_SET, default_, none, provider_data_share, inherit };

namespace DataRetentionModeMapper {
AWS_BEDROCK_API DataRetentionMode GetDataRetentionModeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForDataRetentionMode(DataRetentionMode value);
}  // namespace DataRetentionModeMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
