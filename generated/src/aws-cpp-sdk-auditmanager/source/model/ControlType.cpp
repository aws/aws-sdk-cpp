﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ControlType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AuditManager {
namespace Model {
namespace ControlTypeMapper {

static const int Standard_HASH = HashingUtils::HashString("Standard");
static const int Custom_HASH = HashingUtils::HashString("Custom");
static const int Core_HASH = HashingUtils::HashString("Core");

ControlType GetControlTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Standard_HASH) {
    return ControlType::Standard;
  } else if (hashCode == Custom_HASH) {
    return ControlType::Custom;
  } else if (hashCode == Core_HASH) {
    return ControlType::Core;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ControlType>(hashCode);
  }

  return ControlType::NOT_SET;
}

Aws::String GetNameForControlType(ControlType enumValue) {
  switch (enumValue) {
    case ControlType::NOT_SET:
      return {};
    case ControlType::Standard:
      return "Standard";
    case ControlType::Custom:
      return "Custom";
    case ControlType::Core:
      return "Core";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ControlTypeMapper
}  // namespace Model
}  // namespace AuditManager
}  // namespace Aws
