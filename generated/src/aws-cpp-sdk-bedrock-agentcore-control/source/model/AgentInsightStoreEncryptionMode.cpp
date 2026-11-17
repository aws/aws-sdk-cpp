/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentInsightStoreEncryptionMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace AgentInsightStoreEncryptionModeMapper {

static const int AWS_OWNED_KMS_KEY_HASH = HashingUtils::HashString("AWS_OWNED_KMS_KEY");
static const int CUSTOMER_MANAGED_KMS_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_KMS");

AgentInsightStoreEncryptionMode GetAgentInsightStoreEncryptionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_OWNED_KMS_KEY_HASH) {
    return AgentInsightStoreEncryptionMode::AWS_OWNED_KMS_KEY;
  } else if (hashCode == CUSTOMER_MANAGED_KMS_HASH) {
    return AgentInsightStoreEncryptionMode::CUSTOMER_MANAGED_KMS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentInsightStoreEncryptionMode>(hashCode);
  }

  return AgentInsightStoreEncryptionMode::NOT_SET;
}

Aws::String GetNameForAgentInsightStoreEncryptionMode(AgentInsightStoreEncryptionMode enumValue) {
  switch (enumValue) {
    case AgentInsightStoreEncryptionMode::NOT_SET:
      return {};
    case AgentInsightStoreEncryptionMode::AWS_OWNED_KMS_KEY:
      return "AWS_OWNED_KMS_KEY";
    case AgentInsightStoreEncryptionMode::CUSTOMER_MANAGED_KMS:
      return "CUSTOMER_MANAGED_KMS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentInsightStoreEncryptionModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
