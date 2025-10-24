﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/TargetResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace TargetResourceTypeMapper {

static const int ASSET_HASH = HashingUtils::HashString("ASSET");
static const int COMPUTATION_MODEL_HASH = HashingUtils::HashString("COMPUTATION_MODEL");

TargetResourceType GetTargetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSET_HASH) {
    return TargetResourceType::ASSET;
  } else if (hashCode == COMPUTATION_MODEL_HASH) {
    return TargetResourceType::COMPUTATION_MODEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetResourceType>(hashCode);
  }

  return TargetResourceType::NOT_SET;
}

Aws::String GetNameForTargetResourceType(TargetResourceType enumValue) {
  switch (enumValue) {
    case TargetResourceType::NOT_SET:
      return {};
    case TargetResourceType::ASSET:
      return "ASSET";
    case TargetResourceType::COMPUTATION_MODEL:
      return "COMPUTATION_MODEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetResourceTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
