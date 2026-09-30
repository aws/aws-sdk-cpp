/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/OrderingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace OrderingTypeMapper {

static const int FIFO_HASH = HashingUtils::HashString("FIFO");
static const int UNORDERED_HASH = HashingUtils::HashString("UNORDERED");

OrderingType GetOrderingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FIFO_HASH) {
    return OrderingType::FIFO;
  } else if (hashCode == UNORDERED_HASH) {
    return OrderingType::UNORDERED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrderingType>(hashCode);
  }

  return OrderingType::NOT_SET;
}

Aws::String GetNameForOrderingType(OrderingType enumValue) {
  switch (enumValue) {
    case OrderingType::NOT_SET:
      return {};
    case OrderingType::FIFO:
      return "FIFO";
    case OrderingType::UNORDERED:
      return "UNORDERED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrderingTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
