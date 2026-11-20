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
enum class HttpMethod { NOT_SET, GET_, POST, PUT, DELETE_, PATCH, ANY, HEAD, OPTIONS };

namespace HttpMethodMapper {
AWS_APIPORTAL_API HttpMethod GetHttpMethodForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForHttpMethod(HttpMethod value);
}  // namespace HttpMethodMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
