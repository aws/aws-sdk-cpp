/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/OrderType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace OrderTypeMapper {

static const int ASC_HASH = HashingUtils::HashString("ASC");
static const int DESC_HASH = HashingUtils::HashString("DESC");

OrderType GetOrderTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASC_HASH) {
    return OrderType::ASC;
  } else if (hashCode == DESC_HASH) {
    return OrderType::DESC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrderType>(hashCode);
  }

  return OrderType::NOT_SET;
}

Aws::String GetNameForOrderType(OrderType enumValue) {
  switch (enumValue) {
    case OrderType::NOT_SET:
      return {};
    case OrderType::ASC:
      return "ASC";
    case OrderType::DESC:
      return "DESC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrderTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
