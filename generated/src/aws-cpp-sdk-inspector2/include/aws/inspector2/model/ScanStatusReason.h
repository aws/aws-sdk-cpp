/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class ScanStatusReason
  {
    NOT_SET,
    PENDING_INITIAL_SCAN,
    ACCESS_DENIED,
    INTERNAL_ERROR,
    UNMANAGED_EC2_INSTANCE,
    UNSUPPORTED_OS,
    SCAN_ELIGIBILITY_EXPIRED,
    RESOURCE_TERMINATED,
    SUCCESSFUL,
    NO_RESOURCES_FOUND,
    IMAGE_SIZE_EXCEEDED,
    SCAN_FREQUENCY_MANUAL,
    SCAN_FREQUENCY_SCAN_ON_PUSH,
    EC2_INSTANCE_STOPPED,
    PENDING_DISABLE,
    NO_INVENTORY,
    STALE_INVENTORY,
    EXCLUDED_BY_TAG,
    UNSUPPORTED_RUNTIME
  };

namespace ScanStatusReasonMapper
{
AWS_INSPECTOR2_API ScanStatusReason GetScanStatusReasonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForScanStatusReason(ScanStatusReason value);
} // namespace ScanStatusReasonMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
