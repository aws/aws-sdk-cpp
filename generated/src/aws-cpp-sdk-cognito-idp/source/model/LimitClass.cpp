/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/LimitClass.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace LimitClassMapper {

static const int API_CATEGORY_HASH = HashingUtils::HashString("API_CATEGORY");

LimitClass GetLimitClassForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == API_CATEGORY_HASH) {
    return LimitClass::API_CATEGORY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LimitClass>(hashCode);
  }

  return LimitClass::NOT_SET;
}

Aws::String GetNameForLimitClass(LimitClass enumValue) {
  switch (enumValue) {
    case LimitClass::NOT_SET:
      return {};
    case LimitClass::API_CATEGORY:
      return "API_CATEGORY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LimitClassMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
