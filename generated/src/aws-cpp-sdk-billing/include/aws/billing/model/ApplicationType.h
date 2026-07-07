/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Billing {
namespace Model {
enum class ApplicationType { NOT_SET, BEFORE_CROSS_SERVICE_DISCOUNTS, AFTER_DISCOUNTS };

namespace ApplicationTypeMapper {
AWS_BILLING_API ApplicationType GetApplicationTypeForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForApplicationType(ApplicationType value);
}  // namespace ApplicationTypeMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
