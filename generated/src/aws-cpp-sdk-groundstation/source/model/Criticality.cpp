﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/groundstation/model/Criticality.h>

using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {
namespace CriticalityMapper {

static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
static const int PREFERRED_HASH = HashingUtils::HashString("PREFERRED");
static const int REMOVED_HASH = HashingUtils::HashString("REMOVED");

Criticality GetCriticalityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUIRED_HASH) {
    return Criticality::REQUIRED;
  } else if (hashCode == PREFERRED_HASH) {
    return Criticality::PREFERRED;
  } else if (hashCode == REMOVED_HASH) {
    return Criticality::REMOVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Criticality>(hashCode);
  }

  return Criticality::NOT_SET;
}

Aws::String GetNameForCriticality(Criticality enumValue) {
  switch (enumValue) {
    case Criticality::NOT_SET:
      return {};
    case Criticality::REQUIRED:
      return "REQUIRED";
    case Criticality::PREFERRED:
      return "PREFERRED";
    case Criticality::REMOVED:
      return "REMOVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CriticalityMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
