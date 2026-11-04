/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/model/BulkOperationPerformanceTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace BulkOperationPerformanceTierMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int ACCELERATED_HASH = HashingUtils::HashString("ACCELERATED");

BulkOperationPerformanceTier GetBulkOperationPerformanceTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return BulkOperationPerformanceTier::STANDARD;
  } else if (hashCode == ACCELERATED_HASH) {
    return BulkOperationPerformanceTier::ACCELERATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BulkOperationPerformanceTier>(hashCode);
  }

  return BulkOperationPerformanceTier::NOT_SET;
}

Aws::String GetNameForBulkOperationPerformanceTier(BulkOperationPerformanceTier enumValue) {
  switch (enumValue) {
    case BulkOperationPerformanceTier::NOT_SET:
      return {};
    case BulkOperationPerformanceTier::STANDARD:
      return "STANDARD";
    case BulkOperationPerformanceTier::ACCELERATED:
      return "ACCELERATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BulkOperationPerformanceTierMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
