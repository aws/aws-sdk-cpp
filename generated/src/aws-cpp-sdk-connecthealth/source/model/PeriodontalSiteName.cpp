/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/PeriodontalSiteName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace PeriodontalSiteNameMapper {

static const int DB_HASH = HashingUtils::HashString("DB");
static const int B_HASH = HashingUtils::HashString("B");
static const int MB_HASH = HashingUtils::HashString("MB");
static const int DL_HASH = HashingUtils::HashString("DL");
static const int L_HASH = HashingUtils::HashString("L");
static const int ML_HASH = HashingUtils::HashString("ML");

PeriodontalSiteName GetPeriodontalSiteNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DB_HASH) {
    return PeriodontalSiteName::DB;
  } else if (hashCode == B_HASH) {
    return PeriodontalSiteName::B;
  } else if (hashCode == MB_HASH) {
    return PeriodontalSiteName::MB;
  } else if (hashCode == DL_HASH) {
    return PeriodontalSiteName::DL;
  } else if (hashCode == L_HASH) {
    return PeriodontalSiteName::L;
  } else if (hashCode == ML_HASH) {
    return PeriodontalSiteName::ML;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PeriodontalSiteName>(hashCode);
  }

  return PeriodontalSiteName::NOT_SET;
}

Aws::String GetNameForPeriodontalSiteName(PeriodontalSiteName enumValue) {
  switch (enumValue) {
    case PeriodontalSiteName::NOT_SET:
      return {};
    case PeriodontalSiteName::DB:
      return "DB";
    case PeriodontalSiteName::B:
      return "B";
    case PeriodontalSiteName::MB:
      return "MB";
    case PeriodontalSiteName::DL:
      return "DL";
    case PeriodontalSiteName::L:
      return "L";
    case PeriodontalSiteName::ML:
      return "ML";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PeriodontalSiteNameMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
