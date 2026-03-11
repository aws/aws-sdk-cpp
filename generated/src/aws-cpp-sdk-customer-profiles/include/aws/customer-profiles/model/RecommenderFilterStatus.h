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
enum class RecommenderFilterStatus { NOT_SET, ACTIVE, PENDING, IN_PROGRESS, FAILED, DELETING };

namespace RecommenderFilterStatusMapper {
AWS_CUSTOMERPROFILES_API RecommenderFilterStatus GetRecommenderFilterStatusForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForRecommenderFilterStatus(RecommenderFilterStatus value);
}  // namespace RecommenderFilterStatusMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
