/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ServiceTierType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace ServiceTierTypeMapper {

static const int priority_HASH = HashingUtils::HashString("priority");
static const int default__HASH = HashingUtils::HashString("default");
static const int flex_HASH = HashingUtils::HashString("flex");

ServiceTierType GetServiceTierTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == priority_HASH) {
    return ServiceTierType::priority;
  } else if (hashCode == default__HASH) {
    return ServiceTierType::default_;
  } else if (hashCode == flex_HASH) {
    return ServiceTierType::flex;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceTierType>(hashCode);
  }

  return ServiceTierType::NOT_SET;
}

Aws::String GetNameForServiceTierType(ServiceTierType enumValue) {
  switch (enumValue) {
    case ServiceTierType::NOT_SET:
      return {};
    case ServiceTierType::priority:
      return "priority";
    case ServiceTierType::default_:
      return "default";
    case ServiceTierType::flex:
      return "flex";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceTierTypeMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
