/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lakeformation/model/CredentialsScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {
namespace CredentialsScopeMapper {

static const int READ_HASH = HashingUtils::HashString("READ");
static const int READWRITE_HASH = HashingUtils::HashString("READWRITE");

CredentialsScope GetCredentialsScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == READ_HASH) {
    return CredentialsScope::READ;
  } else if (hashCode == READWRITE_HASH) {
    return CredentialsScope::READWRITE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CredentialsScope>(hashCode);
  }

  return CredentialsScope::NOT_SET;
}

Aws::String GetNameForCredentialsScope(CredentialsScope enumValue) {
  switch (enumValue) {
    case CredentialsScope::NOT_SET:
      return {};
    case CredentialsScope::READ:
      return "READ";
    case CredentialsScope::READWRITE:
      return "READWRITE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CredentialsScopeMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
