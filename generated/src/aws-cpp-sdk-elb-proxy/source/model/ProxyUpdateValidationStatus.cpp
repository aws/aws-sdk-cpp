/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elb-proxy/model/ProxyUpdateValidationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {
namespace ProxyUpdateValidationStatusMapper {

static const int not_validated_HASH = HashingUtils::HashString("not-validated");
static const int valid_HASH = HashingUtils::HashString("valid");
static const int invalid_HASH = HashingUtils::HashString("invalid");

ProxyUpdateValidationStatus GetProxyUpdateValidationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == not_validated_HASH) {
    return ProxyUpdateValidationStatus::not_validated;
  } else if (hashCode == valid_HASH) {
    return ProxyUpdateValidationStatus::valid;
  } else if (hashCode == invalid_HASH) {
    return ProxyUpdateValidationStatus::invalid;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyUpdateValidationStatus>(hashCode);
  }

  return ProxyUpdateValidationStatus::NOT_SET;
}

Aws::String GetNameForProxyUpdateValidationStatus(ProxyUpdateValidationStatus enumValue) {
  switch (enumValue) {
    case ProxyUpdateValidationStatus::NOT_SET:
      return {};
    case ProxyUpdateValidationStatus::not_validated:
      return "not-validated";
    case ProxyUpdateValidationStatus::valid:
      return "valid";
    case ProxyUpdateValidationStatus::invalid:
      return "invalid";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyUpdateValidationStatusMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
