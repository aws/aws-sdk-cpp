/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelInvocationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace ModelInvocationTypeMapper {

static const int InvokeModel_HASH = HashingUtils::HashString("InvokeModel");
static const int Converse_HASH = HashingUtils::HashString("Converse");

ModelInvocationType GetModelInvocationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InvokeModel_HASH) {
    return ModelInvocationType::InvokeModel;
  } else if (hashCode == Converse_HASH) {
    return ModelInvocationType::Converse;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ModelInvocationType>(hashCode);
  }

  return ModelInvocationType::NOT_SET;
}

Aws::String GetNameForModelInvocationType(ModelInvocationType enumValue) {
  switch (enumValue) {
    case ModelInvocationType::NOT_SET:
      return {};
    case ModelInvocationType::InvokeModel:
      return "InvokeModel";
    case ModelInvocationType::Converse:
      return "Converse";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ModelInvocationTypeMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
