/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveStep.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace AgenticRetrieveStepMapper {

static const int Planning_HASH = HashingUtils::HashString("Planning");
static const int Retrieval_HASH = HashingUtils::HashString("Retrieval");
static const int SpeculativeRetrieval_HASH = HashingUtils::HashString("SpeculativeRetrieval");
static const int FullDocumentExpansion_HASH = HashingUtils::HashString("FullDocumentExpansion");

AgenticRetrieveStep GetAgenticRetrieveStepForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Planning_HASH) {
    return AgenticRetrieveStep::Planning;
  } else if (hashCode == Retrieval_HASH) {
    return AgenticRetrieveStep::Retrieval;
  } else if (hashCode == SpeculativeRetrieval_HASH) {
    return AgenticRetrieveStep::SpeculativeRetrieval;
  } else if (hashCode == FullDocumentExpansion_HASH) {
    return AgenticRetrieveStep::FullDocumentExpansion;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgenticRetrieveStep>(hashCode);
  }

  return AgenticRetrieveStep::NOT_SET;
}

Aws::String GetNameForAgenticRetrieveStep(AgenticRetrieveStep enumValue) {
  switch (enumValue) {
    case AgenticRetrieveStep::NOT_SET:
      return {};
    case AgenticRetrieveStep::Planning:
      return "Planning";
    case AgenticRetrieveStep::Retrieval:
      return "Retrieval";
    case AgenticRetrieveStep::SpeculativeRetrieval:
      return "SpeculativeRetrieval";
    case AgenticRetrieveStep::FullDocumentExpansion:
      return "FullDocumentExpansion";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgenticRetrieveStepMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
