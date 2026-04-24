/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/SqlServerLicenseUsage.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace SqlServerLicenseUsageMapper {

static const int full_HASH = HashingUtils::HashString("full");
static const int waived_HASH = HashingUtils::HashString("waived");

SqlServerLicenseUsage GetSqlServerLicenseUsageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == full_HASH) {
    return SqlServerLicenseUsage::full;
  } else if (hashCode == waived_HASH) {
    return SqlServerLicenseUsage::waived;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SqlServerLicenseUsage>(hashCode);
  }

  return SqlServerLicenseUsage::NOT_SET;
}

Aws::String GetNameForSqlServerLicenseUsage(SqlServerLicenseUsage enumValue) {
  switch (enumValue) {
    case SqlServerLicenseUsage::NOT_SET:
      return {};
    case SqlServerLicenseUsage::full:
      return "full";
    case SqlServerLicenseUsage::waived:
      return "waived";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SqlServerLicenseUsageMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
