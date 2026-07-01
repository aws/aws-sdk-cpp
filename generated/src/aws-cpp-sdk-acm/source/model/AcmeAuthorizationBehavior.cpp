/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmeAuthorizationBehavior.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace AcmeAuthorizationBehaviorMapper {

static const int PRE_APPROVED_HASH = HashingUtils::HashString("PRE_APPROVED");

AcmeAuthorizationBehavior GetAcmeAuthorizationBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRE_APPROVED_HASH) {
    return AcmeAuthorizationBehavior::PRE_APPROVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AcmeAuthorizationBehavior>(hashCode);
  }

  return AcmeAuthorizationBehavior::NOT_SET;
}

Aws::String GetNameForAcmeAuthorizationBehavior(AcmeAuthorizationBehavior enumValue) {
  switch (enumValue) {
    case AcmeAuthorizationBehavior::NOT_SET:
      return {};
    case AcmeAuthorizationBehavior::PRE_APPROVED:
      return "PRE_APPROVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AcmeAuthorizationBehaviorMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
