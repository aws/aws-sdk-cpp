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
enum class ContainerImagePullDateRescanDuration { NOT_SET, DAYS_3, DAYS_7, DAYS_14, DAYS_30, DAYS_60, DAYS_90, DAYS_180 };

namespace ContainerImagePullDateRescanDurationMapper {
AWS_INSPECTOR2_API ContainerImagePullDateRescanDuration GetContainerImagePullDateRescanDurationForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForContainerImagePullDateRescanDuration(ContainerImagePullDateRescanDuration value);
}  // namespace ContainerImagePullDateRescanDurationMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
