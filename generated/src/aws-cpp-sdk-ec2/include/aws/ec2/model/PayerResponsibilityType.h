/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class PayerResponsibilityType { NOT_SET, vpc_endpoint_account, vpc_endpoint_service_account };

namespace PayerResponsibilityTypeMapper {
AWS_EC2_API PayerResponsibilityType GetPayerResponsibilityTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForPayerResponsibilityType(PayerResponsibilityType value);
}  // namespace PayerResponsibilityTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
