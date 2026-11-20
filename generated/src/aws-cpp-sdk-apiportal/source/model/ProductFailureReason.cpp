/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ProductFailureReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace ProductFailureReasonMapper {

static const int API_PAGE_ATTACHED_HASH = HashingUtils::HashString("API_PAGE_ATTACHED");
static const int EVALUATION_ERROR_HASH = HashingUtils::HashString("EVALUATION_ERROR");

ProductFailureReason GetProductFailureReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == API_PAGE_ATTACHED_HASH) {
    return ProductFailureReason::API_PAGE_ATTACHED;
  } else if (hashCode == EVALUATION_ERROR_HASH) {
    return ProductFailureReason::EVALUATION_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProductFailureReason>(hashCode);
  }

  return ProductFailureReason::NOT_SET;
}

Aws::String GetNameForProductFailureReason(ProductFailureReason enumValue) {
  switch (enumValue) {
    case ProductFailureReason::NOT_SET:
      return {};
    case ProductFailureReason::API_PAGE_ATTACHED:
      return "API_PAGE_ATTACHED";
    case ProductFailureReason::EVALUATION_ERROR:
      return "EVALUATION_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProductFailureReasonMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
