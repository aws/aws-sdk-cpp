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
enum class FeatureType { NOT_SET, TEXTUAL, CATEGORICAL };

namespace FeatureTypeMapper {
AWS_CUSTOMERPROFILES_API FeatureType GetFeatureTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForFeatureType(FeatureType value);
}  // namespace FeatureTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
