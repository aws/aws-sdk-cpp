/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/FindingCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace FindingCategoryMapper {

static const int INFRASTRUCTURE_HASH = HashingUtils::HashString("INFRASTRUCTURE");
static const int BROKER_CONFIGURATION_HASH = HashingUtils::HashString("BROKER_CONFIGURATION");
static const int TOPIC_CONFIGURATION_HASH = HashingUtils::HashString("TOPIC_CONFIGURATION");
static const int CAPACITY_HASH = HashingUtils::HashString("CAPACITY");
static const int HEALTH_HASH = HashingUtils::HashString("HEALTH");

FindingCategory GetFindingCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INFRASTRUCTURE_HASH) {
    return FindingCategory::INFRASTRUCTURE;
  } else if (hashCode == BROKER_CONFIGURATION_HASH) {
    return FindingCategory::BROKER_CONFIGURATION;
  } else if (hashCode == TOPIC_CONFIGURATION_HASH) {
    return FindingCategory::TOPIC_CONFIGURATION;
  } else if (hashCode == CAPACITY_HASH) {
    return FindingCategory::CAPACITY;
  } else if (hashCode == HEALTH_HASH) {
    return FindingCategory::HEALTH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingCategory>(hashCode);
  }

  return FindingCategory::NOT_SET;
}

Aws::String GetNameForFindingCategory(FindingCategory enumValue) {
  switch (enumValue) {
    case FindingCategory::NOT_SET:
      return {};
    case FindingCategory::INFRASTRUCTURE:
      return "INFRASTRUCTURE";
    case FindingCategory::BROKER_CONFIGURATION:
      return "BROKER_CONFIGURATION";
    case FindingCategory::TOPIC_CONFIGURATION:
      return "TOPIC_CONFIGURATION";
    case FindingCategory::CAPACITY:
      return "CAPACITY";
    case FindingCategory::HEALTH:
      return "HEALTH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingCategoryMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
