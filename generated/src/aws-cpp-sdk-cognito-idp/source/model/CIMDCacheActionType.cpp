/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CIMDCacheActionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace CIMDCacheActionTypeMapper {

static const int REFRESH_HASH = HashingUtils::HashString("REFRESH");
static const int INVALIDATE_HASH = HashingUtils::HashString("INVALIDATE");

CIMDCacheActionType GetCIMDCacheActionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REFRESH_HASH) {
    return CIMDCacheActionType::REFRESH;
  } else if (hashCode == INVALIDATE_HASH) {
    return CIMDCacheActionType::INVALIDATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CIMDCacheActionType>(hashCode);
  }

  return CIMDCacheActionType::NOT_SET;
}

Aws::String GetNameForCIMDCacheActionType(CIMDCacheActionType enumValue) {
  switch (enumValue) {
    case CIMDCacheActionType::NOT_SET:
      return {};
    case CIMDCacheActionType::REFRESH:
      return "REFRESH";
    case CIMDCacheActionType::INVALIDATE:
      return "INVALIDATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CIMDCacheActionTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
