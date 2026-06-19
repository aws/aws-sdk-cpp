/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/TargetType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace TargetTypeMapper {

static const int OPEN_API_SCHEMA_HASH = HashingUtils::HashString("OPEN_API_SCHEMA");
static const int SMITHY_MODEL_HASH = HashingUtils::HashString("SMITHY_MODEL");
static const int MCP_SERVER_HASH = HashingUtils::HashString("MCP_SERVER");
static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
static const int API_GATEWAY_HASH = HashingUtils::HashString("API_GATEWAY");
static const int CONNECTOR_HASH = HashingUtils::HashString("CONNECTOR");
static const int AGENTCORE_RUNTIME_HASH = HashingUtils::HashString("AGENTCORE_RUNTIME");
static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
static const int PROVIDER_HASH = HashingUtils::HashString("PROVIDER");

TargetType GetTargetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPEN_API_SCHEMA_HASH) {
    return TargetType::OPEN_API_SCHEMA;
  } else if (hashCode == SMITHY_MODEL_HASH) {
    return TargetType::SMITHY_MODEL;
  } else if (hashCode == MCP_SERVER_HASH) {
    return TargetType::MCP_SERVER;
  } else if (hashCode == LAMBDA_HASH) {
    return TargetType::LAMBDA;
  } else if (hashCode == API_GATEWAY_HASH) {
    return TargetType::API_GATEWAY;
  } else if (hashCode == CONNECTOR_HASH) {
    return TargetType::CONNECTOR;
  } else if (hashCode == AGENTCORE_RUNTIME_HASH) {
    return TargetType::AGENTCORE_RUNTIME;
  } else if (hashCode == PASSTHROUGH_HASH) {
    return TargetType::PASSTHROUGH;
  } else if (hashCode == PROVIDER_HASH) {
    return TargetType::PROVIDER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetType>(hashCode);
  }

  return TargetType::NOT_SET;
}

Aws::String GetNameForTargetType(TargetType enumValue) {
  switch (enumValue) {
    case TargetType::NOT_SET:
      return {};
    case TargetType::OPEN_API_SCHEMA:
      return "OPEN_API_SCHEMA";
    case TargetType::SMITHY_MODEL:
      return "SMITHY_MODEL";
    case TargetType::MCP_SERVER:
      return "MCP_SERVER";
    case TargetType::LAMBDA:
      return "LAMBDA";
    case TargetType::API_GATEWAY:
      return "API_GATEWAY";
    case TargetType::CONNECTOR:
      return "CONNECTOR";
    case TargetType::AGENTCORE_RUNTIME:
      return "AGENTCORE_RUNTIME";
    case TargetType::PASSTHROUGH:
      return "PASSTHROUGH";
    case TargetType::PROVIDER:
      return "PROVIDER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
