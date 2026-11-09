/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class ScanStatus { NOT_SET, SUBMITTED, WAITING_FOR_BUILD, BUILDING, WAITING_FOR_SCAN, SCANNING, SUCCEEDED, FAILED };

namespace ScanStatusMapper {
AWS_CONTINUUM_API ScanStatus GetScanStatusForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForScanStatus(ScanStatus value);
}  // namespace ScanStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
