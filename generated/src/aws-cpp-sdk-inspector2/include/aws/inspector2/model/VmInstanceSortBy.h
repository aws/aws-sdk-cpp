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
enum class VmInstanceSortBy { NOT_SET, CRITICAL, HIGH, ALL, NETWORK_FINDINGS };

namespace VmInstanceSortByMapper {
AWS_INSPECTOR2_API VmInstanceSortBy GetVmInstanceSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForVmInstanceSortBy(VmInstanceSortBy value);
}  // namespace VmInstanceSortByMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
