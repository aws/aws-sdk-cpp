﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class ResourceScanType { NOT_SET, EC2, ECR, LAMBDA, LAMBDA_CODE, CODE_REPOSITORY };

namespace ResourceScanTypeMapper {
AWS_INSPECTOR2_API ResourceScanType GetResourceScanTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForResourceScanType(ResourceScanType value);
}  // namespace ResourceScanTypeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
