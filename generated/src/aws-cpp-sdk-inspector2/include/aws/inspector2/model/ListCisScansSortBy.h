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
enum class ListCisScansSortBy { NOT_SET, STATUS, SCHEDULED_BY, SCAN_START_DATE, FAILED_CHECKS };

namespace ListCisScansSortByMapper {
AWS_INSPECTOR2_API ListCisScansSortBy GetListCisScansSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForListCisScansSortBy(ListCisScansSortBy value);
}  // namespace ListCisScansSortByMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
