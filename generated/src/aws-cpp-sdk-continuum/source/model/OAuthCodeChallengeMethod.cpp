/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/OAuthCodeChallengeMethod.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace OAuthCodeChallengeMethodMapper {

static const int S256_HASH = HashingUtils::HashString("S256");

OAuthCodeChallengeMethod GetOAuthCodeChallengeMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == S256_HASH) {
    return OAuthCodeChallengeMethod::S256;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OAuthCodeChallengeMethod>(hashCode);
  }

  return OAuthCodeChallengeMethod::NOT_SET;
}

Aws::String GetNameForOAuthCodeChallengeMethod(OAuthCodeChallengeMethod enumValue) {
  switch (enumValue) {
    case OAuthCodeChallengeMethod::NOT_SET:
      return {};
    case OAuthCodeChallengeMethod::S256:
      return "S256";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OAuthCodeChallengeMethodMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
