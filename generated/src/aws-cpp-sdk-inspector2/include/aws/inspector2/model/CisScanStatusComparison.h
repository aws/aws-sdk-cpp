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
enum class CisScanStatusComparison { NOT_SET, EQUALS };

namespace CisScanStatusComparisonMapper {
AWS_INSPECTOR2_API CisScanStatusComparison GetCisScanStatusComparisonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisScanStatusComparison(CisScanStatusComparison value);
}  // namespace CisScanStatusComparisonMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
