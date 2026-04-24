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
enum class SortAttributeType { NOT_SET, PROFILE, CALCULATED };

namespace SortAttributeTypeMapper {
AWS_CUSTOMERPROFILES_API SortAttributeType GetSortAttributeTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForSortAttributeType(SortAttributeType value);
}  // namespace SortAttributeTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
