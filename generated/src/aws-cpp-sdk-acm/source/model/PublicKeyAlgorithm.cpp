/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/PublicKeyAlgorithm.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace PublicKeyAlgorithmMapper {

static const int RSA_2048_HASH = HashingUtils::HashString("RSA_2048");
static const int EC_prime256v1_HASH = HashingUtils::HashString("EC_prime256v1");
static const int EC_secp384r1_HASH = HashingUtils::HashString("EC_secp384r1");

PublicKeyAlgorithm GetPublicKeyAlgorithmForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RSA_2048_HASH) {
    return PublicKeyAlgorithm::RSA_2048;
  } else if (hashCode == EC_prime256v1_HASH) {
    return PublicKeyAlgorithm::EC_prime256v1;
  } else if (hashCode == EC_secp384r1_HASH) {
    return PublicKeyAlgorithm::EC_secp384r1;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PublicKeyAlgorithm>(hashCode);
  }

  return PublicKeyAlgorithm::NOT_SET;
}

Aws::String GetNameForPublicKeyAlgorithm(PublicKeyAlgorithm enumValue) {
  switch (enumValue) {
    case PublicKeyAlgorithm::NOT_SET:
      return {};
    case PublicKeyAlgorithm::RSA_2048:
      return "RSA_2048";
    case PublicKeyAlgorithm::EC_prime256v1:
      return "EC_prime256v1";
    case PublicKeyAlgorithm::EC_secp384r1:
      return "EC_secp384r1";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PublicKeyAlgorithmMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
