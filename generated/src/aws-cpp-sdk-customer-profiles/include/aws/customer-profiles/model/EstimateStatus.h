/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Model {
enum class EstimateStatus { NOT_SET, RUNNING, SUCCEEDED, FAILED };

namespace EstimateStatusMapper {
AWS_CUSTOMERPROFILES_API EstimateStatus GetEstimateStatusForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForEstimateStatus(EstimateStatus value);
}  // namespace EstimateStatusMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
