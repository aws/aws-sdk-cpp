/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/JwtClaimFormat.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIGateway {
namespace Model {
namespace JwtClaimFormatMapper {

static const int SINGLE_STRING_HASH = HashingUtils::HashString("SINGLE_STRING");

JwtClaimFormat GetJwtClaimFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SINGLE_STRING_HASH) {
    return JwtClaimFormat::SINGLE_STRING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JwtClaimFormat>(hashCode);
  }

  return JwtClaimFormat::NOT_SET;
}

Aws::String GetNameForJwtClaimFormat(JwtClaimFormat enumValue) {
  switch (enumValue) {
    case JwtClaimFormat::NOT_SET:
      return {};
    case JwtClaimFormat::SINGLE_STRING:
      return "SINGLE_STRING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JwtClaimFormatMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
