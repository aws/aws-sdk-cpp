/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OnDomainTakeover.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {
namespace OnDomainTakeoverMapper {

static const int allow_HASH = HashingUtils::HashString("allow");
static const int reject_HASH = HashingUtils::HashString("reject");

OnDomainTakeover GetOnDomainTakeoverForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == allow_HASH) {
    return OnDomainTakeover::allow;
  } else if (hashCode == reject_HASH) {
    return OnDomainTakeover::reject;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnDomainTakeover>(hashCode);
  }

  return OnDomainTakeover::NOT_SET;
}

Aws::String GetNameForOnDomainTakeover(OnDomainTakeover enumValue) {
  switch (enumValue) {
    case OnDomainTakeover::NOT_SET:
      return {};
    case OnDomainTakeover::allow:
      return "allow";
    case OnDomainTakeover::reject:
      return "reject";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnDomainTakeoverMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
