/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/TrustStoreStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {
namespace TrustStoreStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int active_HASH = HashingUtils::HashString("active");
static const int failed_HASH = HashingUtils::HashString("failed");

TrustStoreStatus GetTrustStoreStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return TrustStoreStatus::pending;
  } else if (hashCode == active_HASH) {
    return TrustStoreStatus::active;
  } else if (hashCode == failed_HASH) {
    return TrustStoreStatus::failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrustStoreStatus>(hashCode);
  }

  return TrustStoreStatus::NOT_SET;
}

Aws::String GetNameForTrustStoreStatus(TrustStoreStatus enumValue) {
  switch (enumValue) {
    case TrustStoreStatus::NOT_SET:
      return {};
    case TrustStoreStatus::pending:
      return "pending";
    case TrustStoreStatus::active:
      return "active";
    case TrustStoreStatus::failed:
      return "failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrustStoreStatusMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
