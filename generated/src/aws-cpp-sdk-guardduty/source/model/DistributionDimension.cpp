/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/DistributionDimension.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace DistributionDimensionMapper {

static const int SEVERITY_HASH = HashingUtils::HashString("SEVERITY");
static const int TYPE_HASH = HashingUtils::HashString("TYPE");
static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
static const int ATTACK_VECTOR_HASH = HashingUtils::HashString("ATTACK_VECTOR");
static const int ARCHIVE_HASH = HashingUtils::HashString("ARCHIVE");

DistributionDimension GetDistributionDimensionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SEVERITY_HASH) {
    return DistributionDimension::SEVERITY;
  } else if (hashCode == TYPE_HASH) {
    return DistributionDimension::TYPE;
  } else if (hashCode == RESOURCE_HASH) {
    return DistributionDimension::RESOURCE;
  } else if (hashCode == ATTACK_VECTOR_HASH) {
    return DistributionDimension::ATTACK_VECTOR;
  } else if (hashCode == ARCHIVE_HASH) {
    return DistributionDimension::ARCHIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DistributionDimension>(hashCode);
  }

  return DistributionDimension::NOT_SET;
}

Aws::String GetNameForDistributionDimension(DistributionDimension enumValue) {
  switch (enumValue) {
    case DistributionDimension::NOT_SET:
      return {};
    case DistributionDimension::SEVERITY:
      return "SEVERITY";
    case DistributionDimension::TYPE:
      return "TYPE";
    case DistributionDimension::RESOURCE:
      return "RESOURCE";
    case DistributionDimension::ATTACK_VECTOR:
      return "ATTACK_VECTOR";
    case DistributionDimension::ARCHIVE:
      return "ARCHIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DistributionDimensionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
