﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/WarningType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace WarningTypeMapper {

static const int MUTUALLY_EXCLUSIVE_PROPERTIES_HASH = HashingUtils::HashString("MUTUALLY_EXCLUSIVE_PROPERTIES");
static const int UNSUPPORTED_PROPERTIES_HASH = HashingUtils::HashString("UNSUPPORTED_PROPERTIES");
static const int MUTUALLY_EXCLUSIVE_TYPES_HASH = HashingUtils::HashString("MUTUALLY_EXCLUSIVE_TYPES");
static const int EXCLUDED_PROPERTIES_HASH = HashingUtils::HashString("EXCLUDED_PROPERTIES");
static const int EXCLUDED_RESOURCES_HASH = HashingUtils::HashString("EXCLUDED_RESOURCES");

WarningType GetWarningTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MUTUALLY_EXCLUSIVE_PROPERTIES_HASH) {
    return WarningType::MUTUALLY_EXCLUSIVE_PROPERTIES;
  } else if (hashCode == UNSUPPORTED_PROPERTIES_HASH) {
    return WarningType::UNSUPPORTED_PROPERTIES;
  } else if (hashCode == MUTUALLY_EXCLUSIVE_TYPES_HASH) {
    return WarningType::MUTUALLY_EXCLUSIVE_TYPES;
  } else if (hashCode == EXCLUDED_PROPERTIES_HASH) {
    return WarningType::EXCLUDED_PROPERTIES;
  } else if (hashCode == EXCLUDED_RESOURCES_HASH) {
    return WarningType::EXCLUDED_RESOURCES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WarningType>(hashCode);
  }

  return WarningType::NOT_SET;
}

Aws::String GetNameForWarningType(WarningType enumValue) {
  switch (enumValue) {
    case WarningType::NOT_SET:
      return {};
    case WarningType::MUTUALLY_EXCLUSIVE_PROPERTIES:
      return "MUTUALLY_EXCLUSIVE_PROPERTIES";
    case WarningType::UNSUPPORTED_PROPERTIES:
      return "UNSUPPORTED_PROPERTIES";
    case WarningType::MUTUALLY_EXCLUSIVE_TYPES:
      return "MUTUALLY_EXCLUSIVE_TYPES";
    case WarningType::EXCLUDED_PROPERTIES:
      return "EXCLUDED_PROPERTIES";
    case WarningType::EXCLUDED_RESOURCES:
      return "EXCLUDED_RESOURCES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WarningTypeMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
