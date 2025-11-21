/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/ScanStatusReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ScanStatusReasonMapper {

static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
static const int SNAPSHOT_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SNAPSHOT_SIZE_LIMIT_EXCEEDED");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("RESOURCE_UNAVAILABLE");
static const int INCONSISTENT_SOURCE_HASH = HashingUtils::HashString("INCONSISTENT_SOURCE");
static const int INCREMENTAL_NO_DIFFERENCE_HASH = HashingUtils::HashString("INCREMENTAL_NO_DIFFERENCE");
static const int NO_EBS_VOLUMES_FOUND_HASH = HashingUtils::HashString("NO_EBS_VOLUMES_FOUND");
static const int UNSUPPORTED_PRODUCT_CODE_TYPE_HASH = HashingUtils::HashString("UNSUPPORTED_PRODUCT_CODE_TYPE");
static const int AMI_SNAPSHOT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AMI_SNAPSHOT_LIMIT_EXCEEDED");
static const int UNRELATED_RESOURCES_HASH = HashingUtils::HashString("UNRELATED_RESOURCES");
static const int BASE_RESOURCE_NOT_SCANNED_HASH = HashingUtils::HashString("BASE_RESOURCE_NOT_SCANNED");
static const int BASE_CREATED_AFTER_TARGET_HASH = HashingUtils::HashString("BASE_CREATED_AFTER_TARGET");
static const int UNSUPPORTED_FOR_INCREMENTAL_HASH = HashingUtils::HashString("UNSUPPORTED_FOR_INCREMENTAL");
static const int UNSUPPORTED_AMI_HASH = HashingUtils::HashString("UNSUPPORTED_AMI");
static const int UNSUPPORTED_SNAPSHOT_HASH = HashingUtils::HashString("UNSUPPORTED_SNAPSHOT");
static const int UNSUPPORTED_COMPOSITE_RECOVERY_POINT_HASH = HashingUtils::HashString("UNSUPPORTED_COMPOSITE_RECOVERY_POINT");

ScanStatusReason GetScanStatusReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCESS_DENIED_HASH) {
    return ScanStatusReason::ACCESS_DENIED;
  } else if (hashCode == RESOURCE_NOT_FOUND_HASH) {
    return ScanStatusReason::RESOURCE_NOT_FOUND;
  } else if (hashCode == SNAPSHOT_SIZE_LIMIT_EXCEEDED_HASH) {
    return ScanStatusReason::SNAPSHOT_SIZE_LIMIT_EXCEEDED;
  } else if (hashCode == RESOURCE_UNAVAILABLE_HASH) {
    return ScanStatusReason::RESOURCE_UNAVAILABLE;
  } else if (hashCode == INCONSISTENT_SOURCE_HASH) {
    return ScanStatusReason::INCONSISTENT_SOURCE;
  } else if (hashCode == INCREMENTAL_NO_DIFFERENCE_HASH) {
    return ScanStatusReason::INCREMENTAL_NO_DIFFERENCE;
  } else if (hashCode == NO_EBS_VOLUMES_FOUND_HASH) {
    return ScanStatusReason::NO_EBS_VOLUMES_FOUND;
  } else if (hashCode == UNSUPPORTED_PRODUCT_CODE_TYPE_HASH) {
    return ScanStatusReason::UNSUPPORTED_PRODUCT_CODE_TYPE;
  } else if (hashCode == AMI_SNAPSHOT_LIMIT_EXCEEDED_HASH) {
    return ScanStatusReason::AMI_SNAPSHOT_LIMIT_EXCEEDED;
  } else if (hashCode == UNRELATED_RESOURCES_HASH) {
    return ScanStatusReason::UNRELATED_RESOURCES;
  } else if (hashCode == BASE_RESOURCE_NOT_SCANNED_HASH) {
    return ScanStatusReason::BASE_RESOURCE_NOT_SCANNED;
  } else if (hashCode == BASE_CREATED_AFTER_TARGET_HASH) {
    return ScanStatusReason::BASE_CREATED_AFTER_TARGET;
  } else if (hashCode == UNSUPPORTED_FOR_INCREMENTAL_HASH) {
    return ScanStatusReason::UNSUPPORTED_FOR_INCREMENTAL;
  } else if (hashCode == UNSUPPORTED_AMI_HASH) {
    return ScanStatusReason::UNSUPPORTED_AMI;
  } else if (hashCode == UNSUPPORTED_SNAPSHOT_HASH) {
    return ScanStatusReason::UNSUPPORTED_SNAPSHOT;
  } else if (hashCode == UNSUPPORTED_COMPOSITE_RECOVERY_POINT_HASH) {
    return ScanStatusReason::UNSUPPORTED_COMPOSITE_RECOVERY_POINT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanStatusReason>(hashCode);
  }

  return ScanStatusReason::NOT_SET;
}

Aws::String GetNameForScanStatusReason(ScanStatusReason enumValue) {
  switch (enumValue) {
    case ScanStatusReason::NOT_SET:
      return {};
    case ScanStatusReason::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case ScanStatusReason::RESOURCE_NOT_FOUND:
      return "RESOURCE_NOT_FOUND";
    case ScanStatusReason::SNAPSHOT_SIZE_LIMIT_EXCEEDED:
      return "SNAPSHOT_SIZE_LIMIT_EXCEEDED";
    case ScanStatusReason::RESOURCE_UNAVAILABLE:
      return "RESOURCE_UNAVAILABLE";
    case ScanStatusReason::INCONSISTENT_SOURCE:
      return "INCONSISTENT_SOURCE";
    case ScanStatusReason::INCREMENTAL_NO_DIFFERENCE:
      return "INCREMENTAL_NO_DIFFERENCE";
    case ScanStatusReason::NO_EBS_VOLUMES_FOUND:
      return "NO_EBS_VOLUMES_FOUND";
    case ScanStatusReason::UNSUPPORTED_PRODUCT_CODE_TYPE:
      return "UNSUPPORTED_PRODUCT_CODE_TYPE";
    case ScanStatusReason::AMI_SNAPSHOT_LIMIT_EXCEEDED:
      return "AMI_SNAPSHOT_LIMIT_EXCEEDED";
    case ScanStatusReason::UNRELATED_RESOURCES:
      return "UNRELATED_RESOURCES";
    case ScanStatusReason::BASE_RESOURCE_NOT_SCANNED:
      return "BASE_RESOURCE_NOT_SCANNED";
    case ScanStatusReason::BASE_CREATED_AFTER_TARGET:
      return "BASE_CREATED_AFTER_TARGET";
    case ScanStatusReason::UNSUPPORTED_FOR_INCREMENTAL:
      return "UNSUPPORTED_FOR_INCREMENTAL";
    case ScanStatusReason::UNSUPPORTED_AMI:
      return "UNSUPPORTED_AMI";
    case ScanStatusReason::UNSUPPORTED_SNAPSHOT:
      return "UNSUPPORTED_SNAPSHOT";
    case ScanStatusReason::UNSUPPORTED_COMPOSITE_RECOVERY_POINT:
      return "UNSUPPORTED_COMPOSITE_RECOVERY_POINT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanStatusReasonMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
