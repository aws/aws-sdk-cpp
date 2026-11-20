/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ProductApiPageStatusExceptionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace ProductApiPageStatusExceptionTypeMapper {

static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
static const int RESOURCE_DELETED_HASH = HashingUtils::HashString("RESOURCE_DELETED");
static const int MEMBER_LEFT_ORG_HASH = HashingUtils::HashString("MEMBER_LEFT_ORG");

ProductApiPageStatusExceptionType GetProductApiPageStatusExceptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INTERNAL_FAILURE_HASH) {
    return ProductApiPageStatusExceptionType::INTERNAL_FAILURE;
  } else if (hashCode == RESOURCE_DELETED_HASH) {
    return ProductApiPageStatusExceptionType::RESOURCE_DELETED;
  } else if (hashCode == MEMBER_LEFT_ORG_HASH) {
    return ProductApiPageStatusExceptionType::MEMBER_LEFT_ORG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProductApiPageStatusExceptionType>(hashCode);
  }

  return ProductApiPageStatusExceptionType::NOT_SET;
}

Aws::String GetNameForProductApiPageStatusExceptionType(ProductApiPageStatusExceptionType enumValue) {
  switch (enumValue) {
    case ProductApiPageStatusExceptionType::NOT_SET:
      return {};
    case ProductApiPageStatusExceptionType::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    case ProductApiPageStatusExceptionType::RESOURCE_DELETED:
      return "RESOURCE_DELETED";
    case ProductApiPageStatusExceptionType::MEMBER_LEFT_ORG:
      return "MEMBER_LEFT_ORG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProductApiPageStatusExceptionTypeMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
