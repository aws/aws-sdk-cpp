/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RetrievalInstructionFailureReasonCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace RetrievalInstructionFailureReasonCodeMapper {

static const int CONTENT_REJECTED_HASH = HashingUtils::HashString("CONTENT_REJECTED");
static const int CLIENT_ERROR_HASH = HashingUtils::HashString("CLIENT_ERROR");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

RetrievalInstructionFailureReasonCode GetRetrievalInstructionFailureReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTENT_REJECTED_HASH) {
    return RetrievalInstructionFailureReasonCode::CONTENT_REJECTED;
  } else if (hashCode == CLIENT_ERROR_HASH) {
    return RetrievalInstructionFailureReasonCode::CLIENT_ERROR;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return RetrievalInstructionFailureReasonCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RetrievalInstructionFailureReasonCode>(hashCode);
  }

  return RetrievalInstructionFailureReasonCode::NOT_SET;
}

Aws::String GetNameForRetrievalInstructionFailureReasonCode(RetrievalInstructionFailureReasonCode enumValue) {
  switch (enumValue) {
    case RetrievalInstructionFailureReasonCode::NOT_SET:
      return {};
    case RetrievalInstructionFailureReasonCode::CONTENT_REJECTED:
      return "CONTENT_REJECTED";
    case RetrievalInstructionFailureReasonCode::CLIENT_ERROR:
      return "CLIENT_ERROR";
    case RetrievalInstructionFailureReasonCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RetrievalInstructionFailureReasonCodeMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
