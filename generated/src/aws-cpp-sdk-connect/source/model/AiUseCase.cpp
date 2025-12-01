/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AiUseCase.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace AiUseCaseMapper {

static const int AgentAssistance_HASH = HashingUtils::HashString("AgentAssistance");
static const int SelfService_HASH = HashingUtils::HashString("SelfService");

AiUseCase GetAiUseCaseForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AgentAssistance_HASH) {
    return AiUseCase::AgentAssistance;
  } else if (hashCode == SelfService_HASH) {
    return AiUseCase::SelfService;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AiUseCase>(hashCode);
  }

  return AiUseCase::NOT_SET;
}

Aws::String GetNameForAiUseCase(AiUseCase enumValue) {
  switch (enumValue) {
    case AiUseCase::NOT_SET:
      return {};
    case AiUseCase::AgentAssistance:
      return "AgentAssistance";
    case AiUseCase::SelfService:
      return "SelfService";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AiUseCaseMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
