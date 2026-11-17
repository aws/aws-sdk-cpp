/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {
namespace ConformancePackTypeMapper {

static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");

ConformancePackType GetConformancePackTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_HASH) {
    return ConformancePackType::CUSTOM;
  } else if (hashCode == MANAGED_HASH) {
    return ConformancePackType::MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConformancePackType>(hashCode);
  }

  return ConformancePackType::NOT_SET;
}

Aws::String GetNameForConformancePackType(ConformancePackType enumValue) {
  switch (enumValue) {
    case ConformancePackType::NOT_SET:
      return {};
    case ConformancePackType::CUSTOM:
      return "CUSTOM";
    case ConformancePackType::MANAGED:
      return "MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConformancePackTypeMapper
}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
