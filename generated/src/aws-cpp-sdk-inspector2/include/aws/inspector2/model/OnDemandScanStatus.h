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
enum class OnDemandScanStatus { NOT_SET, IN_PROGRESS, SUCCESSFUL, FAILED };

namespace OnDemandScanStatusMapper {
AWS_INSPECTOR2_API OnDemandScanStatus GetOnDemandScanStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForOnDemandScanStatus(OnDemandScanStatus value);
}  // namespace OnDemandScanStatusMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
