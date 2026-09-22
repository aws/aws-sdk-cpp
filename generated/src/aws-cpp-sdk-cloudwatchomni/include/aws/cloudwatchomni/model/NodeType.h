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
enum class NodeType { NOT_SET, SERVICE, RESOURCE, REMOTE_SERVICE };

namespace NodeTypeMapper {
AWS_CLOUDWATCHOMNI_API NodeType GetNodeTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForNodeType(NodeType value);
}  // namespace NodeTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
