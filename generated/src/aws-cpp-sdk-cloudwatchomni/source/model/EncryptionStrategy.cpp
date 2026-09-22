/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/EncryptionStrategy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace EncryptionStrategyMapper {

static const int AWS_OWNED_HASH = HashingUtils::HashString("AWS_OWNED");
static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");

EncryptionStrategy GetEncryptionStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_OWNED_HASH) {
    return EncryptionStrategy::AWS_OWNED;
  } else if (hashCode == CUSTOMER_MANAGED_HASH) {
    return EncryptionStrategy::CUSTOMER_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionStrategy>(hashCode);
  }

  return EncryptionStrategy::NOT_SET;
}

Aws::String GetNameForEncryptionStrategy(EncryptionStrategy enumValue) {
  switch (enumValue) {
    case EncryptionStrategy::NOT_SET:
      return {};
    case EncryptionStrategy::AWS_OWNED:
      return "AWS_OWNED";
    case EncryptionStrategy::CUSTOMER_MANAGED:
      return "CUSTOMER_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionStrategyMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
