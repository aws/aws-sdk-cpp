/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/SigningRepositoryFilterType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace SigningRepositoryFilterTypeMapper {

static const int WILDCARD_MATCH_HASH = HashingUtils::HashString("WILDCARD_MATCH");

SigningRepositoryFilterType GetSigningRepositoryFilterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WILDCARD_MATCH_HASH) {
    return SigningRepositoryFilterType::WILDCARD_MATCH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SigningRepositoryFilterType>(hashCode);
  }

  return SigningRepositoryFilterType::NOT_SET;
}

Aws::String GetNameForSigningRepositoryFilterType(SigningRepositoryFilterType enumValue) {
  switch (enumValue) {
    case SigningRepositoryFilterType::NOT_SET:
      return {};
    case SigningRepositoryFilterType::WILDCARD_MATCH:
      return "WILDCARD_MATCH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SigningRepositoryFilterTypeMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
