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
enum class DataRetentionStorageDestination { NOT_SET, customer_managed, amazon_managed };

namespace DataRetentionStorageDestinationMapper {
AWS_BEDROCK_API DataRetentionStorageDestination GetDataRetentionStorageDestinationForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForDataRetentionStorageDestination(DataRetentionStorageDestination value);
}  // namespace DataRetentionStorageDestinationMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
