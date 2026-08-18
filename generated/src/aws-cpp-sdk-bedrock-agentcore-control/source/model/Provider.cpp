/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Provider.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ProviderMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int DeepEval_HASH = HashingUtils::HashString("DeepEval");
static const int AutoEval_HASH = HashingUtils::HashString("AutoEval");
static const int Custom_HASH = HashingUtils::HashString("Custom");

Provider GetProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return Provider::AWS;
  } else if (hashCode == DeepEval_HASH) {
    return Provider::DeepEval;
  } else if (hashCode == AutoEval_HASH) {
    return Provider::AutoEval;
  } else if (hashCode == Custom_HASH) {
    return Provider::Custom;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Provider>(hashCode);
  }

  return Provider::NOT_SET;
}

Aws::String GetNameForProvider(Provider enumValue) {
  switch (enumValue) {
    case Provider::NOT_SET:
      return {};
    case Provider::AWS:
      return "AWS";
    case Provider::DeepEval:
      return "DeepEval";
    case Provider::AutoEval:
      return "AutoEval";
    case Provider::Custom:
      return "Custom";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProviderMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
