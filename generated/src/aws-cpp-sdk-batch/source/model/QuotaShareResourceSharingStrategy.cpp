/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaShareResourceSharingStrategy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {
namespace QuotaShareResourceSharingStrategyMapper {

static const int RESERVE_HASH = HashingUtils::HashString("RESERVE");
static const int LEND_HASH = HashingUtils::HashString("LEND");
static const int LEND_AND_BORROW_HASH = HashingUtils::HashString("LEND_AND_BORROW");

QuotaShareResourceSharingStrategy GetQuotaShareResourceSharingStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESERVE_HASH) {
    return QuotaShareResourceSharingStrategy::RESERVE;
  } else if (hashCode == LEND_HASH) {
    return QuotaShareResourceSharingStrategy::LEND;
  } else if (hashCode == LEND_AND_BORROW_HASH) {
    return QuotaShareResourceSharingStrategy::LEND_AND_BORROW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuotaShareResourceSharingStrategy>(hashCode);
  }

  return QuotaShareResourceSharingStrategy::NOT_SET;
}

Aws::String GetNameForQuotaShareResourceSharingStrategy(QuotaShareResourceSharingStrategy enumValue) {
  switch (enumValue) {
    case QuotaShareResourceSharingStrategy::NOT_SET:
      return {};
    case QuotaShareResourceSharingStrategy::RESERVE:
      return "RESERVE";
    case QuotaShareResourceSharingStrategy::LEND:
      return "LEND";
    case QuotaShareResourceSharingStrategy::LEND_AND_BORROW:
      return "LEND_AND_BORROW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuotaShareResourceSharingStrategyMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
