/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/identitystore/model/ResourceNotFoundExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace IdentityStore {
namespace Model {
namespace ResourceNotFoundExceptionReasonMapper {

static const int KMS_KEY_NOT_FOUND_HASH = HashingUtils::HashString("KMS_KEY_NOT_FOUND");

ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KMS_KEY_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::KMS_KEY_NOT_FOUND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceNotFoundExceptionReason>(hashCode);
  }

  return ResourceNotFoundExceptionReason::NOT_SET;
}

Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason enumValue) {
  switch (enumValue) {
    case ResourceNotFoundExceptionReason::NOT_SET:
      return {};
    case ResourceNotFoundExceptionReason::KMS_KEY_NOT_FOUND:
      return "KMS_KEY_NOT_FOUND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceNotFoundExceptionReasonMapper
}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
