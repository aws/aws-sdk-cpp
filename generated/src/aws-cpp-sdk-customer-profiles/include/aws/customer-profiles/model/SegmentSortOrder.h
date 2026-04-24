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
enum class SegmentSortOrder { NOT_SET, ASC, DESC };

namespace SegmentSortOrderMapper {
AWS_CUSTOMERPROFILES_API SegmentSortOrder GetSegmentSortOrderForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForSegmentSortOrder(SegmentSortOrder value);
}  // namespace SegmentSortOrderMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
