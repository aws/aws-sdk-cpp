/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/IssuerType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace IssuerTypeMapper {

static const int ORIGINAL_HASH = HashingUtils::HashString("ORIGINAL");
static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");

IssuerType GetIssuerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ORIGINAL_HASH) {
    return IssuerType::ORIGINAL;
  } else if (hashCode == UPDATED_HASH) {
    return IssuerType::UPDATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IssuerType>(hashCode);
  }

  return IssuerType::NOT_SET;
}

Aws::String GetNameForIssuerType(IssuerType enumValue) {
  switch (enumValue) {
    case IssuerType::NOT_SET:
      return {};
    case IssuerType::ORIGINAL:
      return "ORIGINAL";
    case IssuerType::UPDATED:
      return "UPDATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IssuerTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
