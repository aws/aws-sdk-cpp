/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RetrievalInstructionFieldName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace RetrievalInstructionFieldNameMapper {

static const int RETRIEVAL_GUIDANCE_HASH = HashingUtils::HashString("RETRIEVAL_GUIDANCE");
static const int PERSONA_HASH = HashingUtils::HashString("PERSONA");
static const int ANSWER_FORMAT_HASH = HashingUtils::HashString("ANSWER_FORMAT");
static const int ANSWER_POLICY_HASH = HashingUtils::HashString("ANSWER_POLICY");

RetrievalInstructionFieldName GetRetrievalInstructionFieldNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RETRIEVAL_GUIDANCE_HASH) {
    return RetrievalInstructionFieldName::RETRIEVAL_GUIDANCE;
  } else if (hashCode == PERSONA_HASH) {
    return RetrievalInstructionFieldName::PERSONA;
  } else if (hashCode == ANSWER_FORMAT_HASH) {
    return RetrievalInstructionFieldName::ANSWER_FORMAT;
  } else if (hashCode == ANSWER_POLICY_HASH) {
    return RetrievalInstructionFieldName::ANSWER_POLICY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RetrievalInstructionFieldName>(hashCode);
  }

  return RetrievalInstructionFieldName::NOT_SET;
}

Aws::String GetNameForRetrievalInstructionFieldName(RetrievalInstructionFieldName enumValue) {
  switch (enumValue) {
    case RetrievalInstructionFieldName::NOT_SET:
      return {};
    case RetrievalInstructionFieldName::RETRIEVAL_GUIDANCE:
      return "RETRIEVAL_GUIDANCE";
    case RetrievalInstructionFieldName::PERSONA:
      return "PERSONA";
    case RetrievalInstructionFieldName::ANSWER_FORMAT:
      return "ANSWER_FORMAT";
    case RetrievalInstructionFieldName::ANSWER_POLICY:
      return "ANSWER_POLICY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RetrievalInstructionFieldNameMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
