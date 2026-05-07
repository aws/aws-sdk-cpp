/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/BillingEntity.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace BillingEntityMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int AWS_MARKETPLACE_HASH = HashingUtils::HashString("AWS_MARKETPLACE");

BillingEntity GetBillingEntityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return BillingEntity::AWS;
  } else if (hashCode == AWS_MARKETPLACE_HASH) {
    return BillingEntity::AWS_MARKETPLACE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingEntity>(hashCode);
  }

  return BillingEntity::NOT_SET;
}

Aws::String GetNameForBillingEntity(BillingEntity enumValue) {
  switch (enumValue) {
    case BillingEntity::NOT_SET:
      return {};
    case BillingEntity::AWS:
      return "AWS";
    case BillingEntity::AWS_MARKETPLACE:
      return "AWS_MARKETPLACE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingEntityMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
