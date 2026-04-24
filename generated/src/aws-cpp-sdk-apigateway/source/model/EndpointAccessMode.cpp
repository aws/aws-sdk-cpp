/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/EndpointAccessMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIGateway {
namespace Model {
namespace EndpointAccessModeMapper {

static const int BASIC_HASH = HashingUtils::HashString("BASIC");
static const int STRICT_HASH = HashingUtils::HashString("STRICT");

EndpointAccessMode GetEndpointAccessModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BASIC_HASH) {
    return EndpointAccessMode::BASIC;
  } else if (hashCode == STRICT_HASH) {
    return EndpointAccessMode::STRICT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EndpointAccessMode>(hashCode);
  }

  return EndpointAccessMode::NOT_SET;
}

Aws::String GetNameForEndpointAccessMode(EndpointAccessMode enumValue) {
  switch (enumValue) {
    case EndpointAccessMode::NOT_SET:
      return {};
    case EndpointAccessMode::BASIC:
      return "BASIC";
    case EndpointAccessMode::STRICT:
      return "STRICT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EndpointAccessModeMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
