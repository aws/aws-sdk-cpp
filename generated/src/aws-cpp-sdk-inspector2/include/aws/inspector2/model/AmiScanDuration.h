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
enum class AmiScanDuration { NOT_SET, DAYS_180, DAYS_90, DAYS_60, DAYS_30, DAYS_14, DAYS_7 };

namespace AmiScanDurationMapper {
AWS_INSPECTOR2_API AmiScanDuration GetAmiScanDurationForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForAmiScanDuration(AmiScanDuration value);
}  // namespace AmiScanDurationMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
