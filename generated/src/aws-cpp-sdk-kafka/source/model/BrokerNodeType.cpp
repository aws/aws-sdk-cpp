/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/BrokerNodeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace BrokerNodeTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int EXPRESS_HASH = HashingUtils::HashString("EXPRESS");

BrokerNodeType GetBrokerNodeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return BrokerNodeType::STANDARD;
  } else if (hashCode == EXPRESS_HASH) {
    return BrokerNodeType::EXPRESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BrokerNodeType>(hashCode);
  }

  return BrokerNodeType::NOT_SET;
}

Aws::String GetNameForBrokerNodeType(BrokerNodeType enumValue) {
  switch (enumValue) {
    case BrokerNodeType::NOT_SET:
      return {};
    case BrokerNodeType::STANDARD:
      return "STANDARD";
    case BrokerNodeType::EXPRESS:
      return "EXPRESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BrokerNodeTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
