/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class ScanStatusReason {
  NOT_SET,
  ACCESS_DENIED,
  RESOURCE_NOT_FOUND,
  SNAPSHOT_SIZE_LIMIT_EXCEEDED,
  RESOURCE_UNAVAILABLE,
  INCONSISTENT_SOURCE,
  INCREMENTAL_NO_DIFFERENCE,
  NO_EBS_VOLUMES_FOUND,
  UNSUPPORTED_PRODUCT_CODE_TYPE,
  AMI_SNAPSHOT_LIMIT_EXCEEDED,
  UNRELATED_RESOURCES,
  BASE_RESOURCE_NOT_SCANNED,
  BASE_CREATED_AFTER_TARGET,
  UNSUPPORTED_FOR_INCREMENTAL,
  UNSUPPORTED_AMI,
  UNSUPPORTED_SNAPSHOT,
  UNSUPPORTED_COMPOSITE_RECOVERY_POINT
};

namespace ScanStatusReasonMapper {
AWS_GUARDDUTY_API ScanStatusReason GetScanStatusReasonForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForScanStatusReason(ScanStatusReason value);
}  // namespace ScanStatusReasonMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
