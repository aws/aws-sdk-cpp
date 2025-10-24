﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Model {
enum class RangeUnit { NOT_SET, DAYS };

namespace RangeUnitMapper {
AWS_CUSTOMERPROFILES_API RangeUnit GetRangeUnitForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForRangeUnit(RangeUnit value);
}  // namespace RangeUnitMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
