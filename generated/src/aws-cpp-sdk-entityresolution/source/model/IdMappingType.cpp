﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/entityresolution/model/IdMappingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EntityResolution {
namespace Model {
namespace IdMappingTypeMapper {

static const int PROVIDER_HASH = HashingUtils::HashString("PROVIDER");
static const int RULE_BASED_HASH = HashingUtils::HashString("RULE_BASED");

IdMappingType GetIdMappingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROVIDER_HASH) {
    return IdMappingType::PROVIDER;
  } else if (hashCode == RULE_BASED_HASH) {
    return IdMappingType::RULE_BASED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IdMappingType>(hashCode);
  }

  return IdMappingType::NOT_SET;
}

Aws::String GetNameForIdMappingType(IdMappingType enumValue) {
  switch (enumValue) {
    case IdMappingType::NOT_SET:
      return {};
    case IdMappingType::PROVIDER:
      return "PROVIDER";
    case IdMappingType::RULE_BASED:
      return "RULE_BASED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IdMappingTypeMapper
}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
