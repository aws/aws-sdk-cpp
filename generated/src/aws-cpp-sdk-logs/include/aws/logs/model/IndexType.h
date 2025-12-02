/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
enum class IndexType { NOT_SET, FACET, FIELD_INDEX };

namespace IndexTypeMapper {
AWS_CLOUDWATCHLOGS_API IndexType GetIndexTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForIndexType(IndexType value);
}  // namespace IndexTypeMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
