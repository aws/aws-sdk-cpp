/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class OnDemandScanStatusReason {
  NOT_SET,
  ACCESS_DENIED,
  INTERNAL_ERROR,
  STORAGE_LIMIT_EXCEEDED,
  EXTRACTION_COLLECTION_TIME_LIMIT_EXCEEDED,
  UNSUPPORTED_OS,
  RESOURCE_TERMINATED
};

namespace OnDemandScanStatusReasonMapper {
AWS_INSPECTOR2_API OnDemandScanStatusReason GetOnDemandScanStatusReasonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForOnDemandScanStatusReason(OnDemandScanStatusReason value);
}  // namespace OnDemandScanStatusReasonMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
