/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/IntegrationModel.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace IntegrationModelMapper {

static const int RuntimeAPI_HASH = HashingUtils::HashString("RuntimeAPI");

IntegrationModel GetIntegrationModelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RuntimeAPI_HASH) {
    return IntegrationModel::RuntimeAPI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IntegrationModel>(hashCode);
  }

  return IntegrationModel::NOT_SET;
}

Aws::String GetNameForIntegrationModel(IntegrationModel enumValue) {
  switch (enumValue) {
    case IntegrationModel::NOT_SET:
      return {};
    case IntegrationModel::RuntimeAPI:
      return "RuntimeAPI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IntegrationModelMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
