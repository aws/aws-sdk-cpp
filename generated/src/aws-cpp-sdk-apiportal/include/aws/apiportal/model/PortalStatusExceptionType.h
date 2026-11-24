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
enum class PortalStatusExceptionType {
  NOT_SET,
  INTERNAL_FAILURE,
  UNSHARED_PRODUCT_EXCEPTION,
  CLOUDFRONT_DOMAIN_IN_USE,
  MISSING_CLOUDFRONT_PERMISSIONS
};

namespace PortalStatusExceptionTypeMapper {
AWS_APIPORTAL_API PortalStatusExceptionType GetPortalStatusExceptionTypeForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForPortalStatusExceptionType(PortalStatusExceptionType value);
}  // namespace PortalStatusExceptionTypeMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
