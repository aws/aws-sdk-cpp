/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/IdentityProvider.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace IdentityProviderMapper {

static const int IAM_HASH = HashingUtils::HashString("IAM");
static const int IDC_HASH = HashingUtils::HashString("IDC");

IdentityProvider GetIdentityProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IAM_HASH) {
    return IdentityProvider::IAM;
  } else if (hashCode == IDC_HASH) {
    return IdentityProvider::IDC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IdentityProvider>(hashCode);
  }

  return IdentityProvider::NOT_SET;
}

Aws::String GetNameForIdentityProvider(IdentityProvider enumValue) {
  switch (enumValue) {
    case IdentityProvider::NOT_SET:
      return {};
    case IdentityProvider::IAM:
      return "IAM";
    case IdentityProvider::IDC:
      return "IDC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IdentityProviderMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
