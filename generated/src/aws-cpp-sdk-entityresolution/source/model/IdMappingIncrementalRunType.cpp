﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/entityresolution/model/IdMappingIncrementalRunType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EntityResolution {
namespace Model {
namespace IdMappingIncrementalRunTypeMapper {

static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");

IdMappingIncrementalRunType GetIdMappingIncrementalRunTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ON_DEMAND_HASH) {
    return IdMappingIncrementalRunType::ON_DEMAND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IdMappingIncrementalRunType>(hashCode);
  }

  return IdMappingIncrementalRunType::NOT_SET;
}

Aws::String GetNameForIdMappingIncrementalRunType(IdMappingIncrementalRunType enumValue) {
  switch (enumValue) {
    case IdMappingIncrementalRunType::NOT_SET:
      return {};
    case IdMappingIncrementalRunType::ON_DEMAND:
      return "ON_DEMAND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IdMappingIncrementalRunTypeMapper
}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
