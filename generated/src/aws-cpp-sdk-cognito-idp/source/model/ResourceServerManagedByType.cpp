/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ResourceServerManagedByType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace ResourceServerManagedByTypeMapper {

static const int COGNITO_HASH = HashingUtils::HashString("COGNITO");

ResourceServerManagedByType GetResourceServerManagedByTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COGNITO_HASH) {
    return ResourceServerManagedByType::COGNITO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceServerManagedByType>(hashCode);
  }

  return ResourceServerManagedByType::NOT_SET;
}

Aws::String GetNameForResourceServerManagedByType(ResourceServerManagedByType enumValue) {
  switch (enumValue) {
    case ResourceServerManagedByType::NOT_SET:
      return {};
    case ResourceServerManagedByType::COGNITO:
      return "COGNITO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceServerManagedByTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
