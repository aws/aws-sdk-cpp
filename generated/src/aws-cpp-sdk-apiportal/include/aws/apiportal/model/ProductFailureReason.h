/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class ProductFailureReason { NOT_SET, API_PAGE_ATTACHED, EVALUATION_ERROR };

namespace ProductFailureReasonMapper {
AWS_APIPORTAL_API ProductFailureReason GetProductFailureReasonForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForProductFailureReason(ProductFailureReason value);
}  // namespace ProductFailureReasonMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
