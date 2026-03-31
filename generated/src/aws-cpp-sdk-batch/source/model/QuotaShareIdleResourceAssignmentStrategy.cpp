/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaShareIdleResourceAssignmentStrategy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {
namespace QuotaShareIdleResourceAssignmentStrategyMapper {

static const int FIFO_HASH = HashingUtils::HashString("FIFO");

QuotaShareIdleResourceAssignmentStrategy GetQuotaShareIdleResourceAssignmentStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FIFO_HASH) {
    return QuotaShareIdleResourceAssignmentStrategy::FIFO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuotaShareIdleResourceAssignmentStrategy>(hashCode);
  }

  return QuotaShareIdleResourceAssignmentStrategy::NOT_SET;
}

Aws::String GetNameForQuotaShareIdleResourceAssignmentStrategy(QuotaShareIdleResourceAssignmentStrategy enumValue) {
  switch (enumValue) {
    case QuotaShareIdleResourceAssignmentStrategy::NOT_SET:
      return {};
    case QuotaShareIdleResourceAssignmentStrategy::FIFO:
      return "FIFO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuotaShareIdleResourceAssignmentStrategyMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
