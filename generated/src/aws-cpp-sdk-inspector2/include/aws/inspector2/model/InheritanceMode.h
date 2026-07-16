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
enum class InheritanceMode { NOT_SET, INHERIT_FROM_ADMIN };

namespace InheritanceModeMapper {
AWS_INSPECTOR2_API InheritanceMode GetInheritanceModeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForInheritanceMode(InheritanceMode value);
}  // namespace InheritanceModeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
