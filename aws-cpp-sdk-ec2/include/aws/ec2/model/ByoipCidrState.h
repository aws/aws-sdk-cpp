/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class ByoipCidrState
  {
    NOT_SET,
    advertised,
    deprovisioned,
    failed_deprovision,
    failed_provision,
    pending_deprovision,
    pending_provision,
    provisioned,
    provisioned_not_publicly_advertisable
  };

namespace ByoipCidrStateMapper
{
AWS_EC2_API ByoipCidrState GetByoipCidrStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForByoipCidrState(ByoipCidrState value);
} // namespace ByoipCidrStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
