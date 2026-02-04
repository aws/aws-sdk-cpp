/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-maps/model/Buildings.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoMaps {
namespace Model {
namespace BuildingsMapper {

static const int Buildings3D_HASH = HashingUtils::HashString("Buildings3D");

Buildings GetBuildingsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Buildings3D_HASH) {
    return Buildings::Buildings3D;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Buildings>(hashCode);
  }

  return Buildings::NOT_SET;
}

Aws::String GetNameForBuildings(Buildings enumValue) {
  switch (enumValue) {
    case Buildings::NOT_SET:
      return {};
    case Buildings::Buildings3D:
      return "Buildings3D";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BuildingsMapper
}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
