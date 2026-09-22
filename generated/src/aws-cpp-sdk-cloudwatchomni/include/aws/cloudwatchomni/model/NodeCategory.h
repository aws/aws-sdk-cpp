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
enum class NodeCategory { NOT_SET, GEN_AI_AGENT, GEN_AI_MODEL, DATABASE, MESSAGING_QUEUE, COMPUTE, STORAGE, NETWORK };

namespace NodeCategoryMapper {
AWS_CLOUDWATCHOMNI_API NodeCategory GetNodeCategoryForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForNodeCategory(NodeCategory value);
}  // namespace NodeCategoryMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
