/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticloadbalancingv2/model/JwtValidationActionAdditionalClaimFormatEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {
namespace JwtValidationActionAdditionalClaimFormatEnumMapper {

static const int single_string_HASH = HashingUtils::HashString("single-string");
static const int string_array_HASH = HashingUtils::HashString("string-array");
static const int space_separated_values_HASH = HashingUtils::HashString("space-separated-values");

JwtValidationActionAdditionalClaimFormatEnum GetJwtValidationActionAdditionalClaimFormatEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == single_string_HASH) {
    return JwtValidationActionAdditionalClaimFormatEnum::single_string;
  } else if (hashCode == string_array_HASH) {
    return JwtValidationActionAdditionalClaimFormatEnum::string_array;
  } else if (hashCode == space_separated_values_HASH) {
    return JwtValidationActionAdditionalClaimFormatEnum::space_separated_values;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JwtValidationActionAdditionalClaimFormatEnum>(hashCode);
  }

  return JwtValidationActionAdditionalClaimFormatEnum::NOT_SET;
}

Aws::String GetNameForJwtValidationActionAdditionalClaimFormatEnum(JwtValidationActionAdditionalClaimFormatEnum enumValue) {
  switch (enumValue) {
    case JwtValidationActionAdditionalClaimFormatEnum::NOT_SET:
      return {};
    case JwtValidationActionAdditionalClaimFormatEnum::single_string:
      return "single-string";
    case JwtValidationActionAdditionalClaimFormatEnum::string_array:
      return "string-array";
    case JwtValidationActionAdditionalClaimFormatEnum::space_separated_values:
      return "space-separated-values";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JwtValidationActionAdditionalClaimFormatEnumMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
