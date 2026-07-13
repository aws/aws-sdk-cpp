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
enum class ContainerImageRescanDuration { NOT_SET, LIFETIME, DAYS_3, DAYS_7, DAYS_30, DAYS_180, DAYS_14, DAYS_60, DAYS_90 };

namespace ContainerImageRescanDurationMapper {
AWS_INSPECTOR2_API ContainerImageRescanDuration GetContainerImageRescanDurationForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForContainerImageRescanDuration(ContainerImageRescanDuration value);
}  // namespace ContainerImageRescanDurationMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
