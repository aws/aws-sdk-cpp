/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/EmbeddingModelType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace EmbeddingModelTypeMapper {

static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");

EmbeddingModelType GetEmbeddingModelTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_HASH) {
    return EmbeddingModelType::CUSTOM;
  } else if (hashCode == MANAGED_HASH) {
    return EmbeddingModelType::MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EmbeddingModelType>(hashCode);
  }

  return EmbeddingModelType::NOT_SET;
}

Aws::String GetNameForEmbeddingModelType(EmbeddingModelType enumValue) {
  switch (enumValue) {
    case EmbeddingModelType::NOT_SET:
      return {};
    case EmbeddingModelType::CUSTOM:
      return "CUSTOM";
    case EmbeddingModelType::MANAGED:
      return "MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EmbeddingModelTypeMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
