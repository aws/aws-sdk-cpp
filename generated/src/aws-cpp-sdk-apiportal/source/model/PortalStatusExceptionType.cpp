/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/PortalStatusExceptionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace PortalStatusExceptionTypeMapper {

static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
static const int UNSHARED_PRODUCT_EXCEPTION_HASH = HashingUtils::HashString("UNSHARED_PRODUCT_EXCEPTION");
static const int CLOUDFRONT_DOMAIN_IN_USE_HASH = HashingUtils::HashString("CLOUDFRONT_DOMAIN_IN_USE");
static const int MISSING_CLOUDFRONT_PERMISSIONS_HASH = HashingUtils::HashString("MISSING_CLOUDFRONT_PERMISSIONS");

PortalStatusExceptionType GetPortalStatusExceptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INTERNAL_FAILURE_HASH) {
    return PortalStatusExceptionType::INTERNAL_FAILURE;
  } else if (hashCode == UNSHARED_PRODUCT_EXCEPTION_HASH) {
    return PortalStatusExceptionType::UNSHARED_PRODUCT_EXCEPTION;
  } else if (hashCode == CLOUDFRONT_DOMAIN_IN_USE_HASH) {
    return PortalStatusExceptionType::CLOUDFRONT_DOMAIN_IN_USE;
  } else if (hashCode == MISSING_CLOUDFRONT_PERMISSIONS_HASH) {
    return PortalStatusExceptionType::MISSING_CLOUDFRONT_PERMISSIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PortalStatusExceptionType>(hashCode);
  }

  return PortalStatusExceptionType::NOT_SET;
}

Aws::String GetNameForPortalStatusExceptionType(PortalStatusExceptionType enumValue) {
  switch (enumValue) {
    case PortalStatusExceptionType::NOT_SET:
      return {};
    case PortalStatusExceptionType::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    case PortalStatusExceptionType::UNSHARED_PRODUCT_EXCEPTION:
      return "UNSHARED_PRODUCT_EXCEPTION";
    case PortalStatusExceptionType::CLOUDFRONT_DOMAIN_IN_USE:
      return "CLOUDFRONT_DOMAIN_IN_USE";
    case PortalStatusExceptionType::MISSING_CLOUDFRONT_PERMISSIONS:
      return "MISSING_CLOUDFRONT_PERMISSIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PortalStatusExceptionTypeMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
