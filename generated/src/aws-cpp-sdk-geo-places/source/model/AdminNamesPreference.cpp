/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/AdminNamesPreference.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace AdminNamesPreferenceMapper {

static const int Alternative_HASH = HashingUtils::HashString("Alternative");
static const int Primary_HASH = HashingUtils::HashString("Primary");

AdminNamesPreference GetAdminNamesPreferenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Alternative_HASH) {
    return AdminNamesPreference::Alternative;
  } else if (hashCode == Primary_HASH) {
    return AdminNamesPreference::Primary;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AdminNamesPreference>(hashCode);
  }

  return AdminNamesPreference::NOT_SET;
}

Aws::String GetNameForAdminNamesPreference(AdminNamesPreference enumValue) {
  switch (enumValue) {
    case AdminNamesPreference::NOT_SET:
      return {};
    case AdminNamesPreference::Alternative:
      return "Alternative";
    case AdminNamesPreference::Primary:
      return "Primary";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AdminNamesPreferenceMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
