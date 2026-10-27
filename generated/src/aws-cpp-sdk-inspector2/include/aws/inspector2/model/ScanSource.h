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
enum class ScanSource { NOT_SET, INSTANCE_SCAN, MACHINE_IMAGE_SCAN };

namespace ScanSourceMapper {
AWS_INSPECTOR2_API ScanSource GetScanSourceForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForScanSource(ScanSource value);
}  // namespace ScanSourceMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
