/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/LayerAvailability.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace LayerAvailabilityMapper {

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");
static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");

LayerAvailability GetLayerAvailabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABLE_HASH) {
    return LayerAvailability::AVAILABLE;
  } else if (hashCode == UNAVAILABLE_HASH) {
    return LayerAvailability::UNAVAILABLE;
  } else if (hashCode == ARCHIVED_HASH) {
    return LayerAvailability::ARCHIVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LayerAvailability>(hashCode);
  }

  return LayerAvailability::NOT_SET;
}

Aws::String GetNameForLayerAvailability(LayerAvailability enumValue) {
  switch (enumValue) {
    case LayerAvailability::NOT_SET:
      return {};
    case LayerAvailability::AVAILABLE:
      return "AVAILABLE";
    case LayerAvailability::UNAVAILABLE:
      return "UNAVAILABLE";
    case LayerAvailability::ARCHIVED:
      return "ARCHIVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LayerAvailabilityMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
