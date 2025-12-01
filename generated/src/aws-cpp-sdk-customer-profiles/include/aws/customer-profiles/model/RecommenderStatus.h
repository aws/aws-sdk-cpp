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
enum class RecommenderStatus { NOT_SET, PENDING, IN_PROGRESS, ACTIVE, FAILED, STOPPING, INACTIVE, STARTING, DELETING };

namespace RecommenderStatusMapper {
AWS_CUSTOMERPROFILES_API RecommenderStatus GetRecommenderStatusForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForRecommenderStatus(RecommenderStatus value);
}  // namespace RecommenderStatusMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
