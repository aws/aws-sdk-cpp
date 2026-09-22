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
enum class EdgeType { NOT_SET, CALLS, ACCESSES, RUNS_ON };

namespace EdgeTypeMapper {
AWS_CLOUDWATCHOMNI_API EdgeType GetEdgeTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForEdgeType(EdgeType value);
}  // namespace EdgeTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
