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
enum class ScanFailureStage { NOT_SET, SUBMITTED, WAITING_FOR_BUILD, BUILDING, WAITING_FOR_SCAN, SCANNING };

namespace ScanFailureStageMapper {
AWS_CONTINUUM_API ScanFailureStage GetScanFailureStageForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForScanFailureStage(ScanFailureStage value);
}  // namespace ScanFailureStageMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
