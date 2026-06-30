/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/PayerResponsibilityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace PayerResponsibilityTypeMapper {

static const int vpc_endpoint_account_HASH = HashingUtils::HashString("vpc-endpoint-account");
static const int vpc_endpoint_service_account_HASH = HashingUtils::HashString("vpc-endpoint-service-account");

PayerResponsibilityType GetPayerResponsibilityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == vpc_endpoint_account_HASH) {
    return PayerResponsibilityType::vpc_endpoint_account;
  } else if (hashCode == vpc_endpoint_service_account_HASH) {
    return PayerResponsibilityType::vpc_endpoint_service_account;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PayerResponsibilityType>(hashCode);
  }

  return PayerResponsibilityType::NOT_SET;
}

Aws::String GetNameForPayerResponsibilityType(PayerResponsibilityType enumValue) {
  switch (enumValue) {
    case PayerResponsibilityType::NOT_SET:
      return {};
    case PayerResponsibilityType::vpc_endpoint_account:
      return "vpc-endpoint-account";
    case PayerResponsibilityType::vpc_endpoint_service_account:
      return "vpc-endpoint-service-account";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PayerResponsibilityTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
