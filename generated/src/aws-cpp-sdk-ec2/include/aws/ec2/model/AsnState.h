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
  enum class AsnState
  {
    NOT_SET,
    deprovisioned,
    failed_deprovision,
    failed_provision,
    pending_deprovision,
    pending_provision,
    provisioned
  };

namespace AsnStateMapper
{
AWS_EC2_API AsnState GetAsnStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAsnState(AsnState value);
} // namespace AsnStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
