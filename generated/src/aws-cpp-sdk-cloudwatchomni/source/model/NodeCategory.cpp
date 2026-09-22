/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/NodeCategory.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace NodeCategoryMapper {

static const int GEN_AI_AGENT_HASH = HashingUtils::HashString("GEN_AI_AGENT");
static const int GEN_AI_MODEL_HASH = HashingUtils::HashString("GEN_AI_MODEL");
static const int DATABASE_HASH = HashingUtils::HashString("DATABASE");
static const int MESSAGING_QUEUE_HASH = HashingUtils::HashString("MESSAGING_QUEUE");
static const int COMPUTE_HASH = HashingUtils::HashString("COMPUTE");
static const int STORAGE_HASH = HashingUtils::HashString("STORAGE");
static const int NETWORK_HASH = HashingUtils::HashString("NETWORK");

NodeCategory GetNodeCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GEN_AI_AGENT_HASH) {
    return NodeCategory::GEN_AI_AGENT;
  } else if (hashCode == GEN_AI_MODEL_HASH) {
    return NodeCategory::GEN_AI_MODEL;
  } else if (hashCode == DATABASE_HASH) {
    return NodeCategory::DATABASE;
  } else if (hashCode == MESSAGING_QUEUE_HASH) {
    return NodeCategory::MESSAGING_QUEUE;
  } else if (hashCode == COMPUTE_HASH) {
    return NodeCategory::COMPUTE;
  } else if (hashCode == STORAGE_HASH) {
    return NodeCategory::STORAGE;
  } else if (hashCode == NETWORK_HASH) {
    return NodeCategory::NETWORK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NodeCategory>(hashCode);
  }

  return NodeCategory::NOT_SET;
}

Aws::String GetNameForNodeCategory(NodeCategory enumValue) {
  switch (enumValue) {
    case NodeCategory::NOT_SET:
      return {};
    case NodeCategory::GEN_AI_AGENT:
      return "GEN_AI_AGENT";
    case NodeCategory::GEN_AI_MODEL:
      return "GEN_AI_MODEL";
    case NodeCategory::DATABASE:
      return "DATABASE";
    case NodeCategory::MESSAGING_QUEUE:
      return "MESSAGING_QUEUE";
    case NodeCategory::COMPUTE:
      return "COMPUTE";
    case NodeCategory::STORAGE:
      return "STORAGE";
    case NodeCategory::NETWORK:
      return "NETWORK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NodeCategoryMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
