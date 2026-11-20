/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ProductStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace ProductStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ProductStatus GetProductStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ProductStatus::ACTIVE;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return ProductStatus::IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return ProductStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProductStatus>(hashCode);
  }

  return ProductStatus::NOT_SET;
}

Aws::String GetNameForProductStatus(ProductStatus enumValue) {
  switch (enumValue) {
    case ProductStatus::NOT_SET:
      return {};
    case ProductStatus::ACTIVE:
      return "ACTIVE";
    case ProductStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case ProductStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProductStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
