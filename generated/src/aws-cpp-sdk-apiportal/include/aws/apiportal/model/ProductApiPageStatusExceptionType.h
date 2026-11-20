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
enum class ProductApiPageStatusExceptionType { NOT_SET, INTERNAL_FAILURE, RESOURCE_DELETED, MEMBER_LEFT_ORG };

namespace ProductApiPageStatusExceptionTypeMapper {
AWS_APIPORTAL_API ProductApiPageStatusExceptionType GetProductApiPageStatusExceptionTypeForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForProductApiPageStatusExceptionType(ProductApiPageStatusExceptionType value);
}  // namespace ProductApiPageStatusExceptionTypeMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
