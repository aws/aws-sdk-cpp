/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/NodeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace NodeTypeMapper {

static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
static const int REMOTE_SERVICE_HASH = HashingUtils::HashString("REMOTE_SERVICE");

NodeType GetNodeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_HASH) {
    return NodeType::SERVICE;
  } else if (hashCode == RESOURCE_HASH) {
    return NodeType::RESOURCE;
  } else if (hashCode == REMOTE_SERVICE_HASH) {
    return NodeType::REMOTE_SERVICE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NodeType>(hashCode);
  }

  return NodeType::NOT_SET;
}

Aws::String GetNameForNodeType(NodeType enumValue) {
  switch (enumValue) {
    case NodeType::NOT_SET:
      return {};
    case NodeType::SERVICE:
      return "SERVICE";
    case NodeType::RESOURCE:
      return "RESOURCE";
    case NodeType::REMOTE_SERVICE:
      return "REMOTE_SERVICE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NodeTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
