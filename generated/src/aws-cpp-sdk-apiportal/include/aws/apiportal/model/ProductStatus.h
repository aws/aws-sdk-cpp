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
enum class ProductStatus { NOT_SET, ACTIVE, IN_PROGRESS, FAILED };

namespace ProductStatusMapper {
AWS_APIPORTAL_API ProductStatus GetProductStatusForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForProductStatus(ProductStatus value);
}  // namespace ProductStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
