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
enum class PayerResponsibilityScope { NOT_SET, vpc_endpoint_charges };

namespace PayerResponsibilityScopeMapper {
AWS_EC2_API PayerResponsibilityScope GetPayerResponsibilityScopeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForPayerResponsibilityScope(PayerResponsibilityScope value);
}  // namespace PayerResponsibilityScopeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
