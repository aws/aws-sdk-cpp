/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class QueryStatus { NOT_SET, Running, Failed, Complete, Cancelled };

namespace QueryStatusMapper {
AWS_CLOUDWATCHOMNI_API QueryStatus GetQueryStatusForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForQueryStatus(QueryStatus value);
}  // namespace QueryStatusMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
