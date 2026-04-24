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
enum class Status { NOT_SET, ENABLING, ENABLED, DISABLING, DISABLED, SUSPENDING, SUSPENDED };

namespace StatusMapper {
AWS_INSPECTOR2_API Status GetStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
