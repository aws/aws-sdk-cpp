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
enum class AttributeMatchingModel { NOT_SET, ONE_TO_ONE, MANY_TO_MANY };

namespace AttributeMatchingModelMapper {
AWS_CUSTOMERPROFILES_API AttributeMatchingModel GetAttributeMatchingModelForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForAttributeMatchingModel(AttributeMatchingModel value);
}  // namespace AttributeMatchingModelMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
