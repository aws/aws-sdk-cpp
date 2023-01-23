/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{
  enum class ByoipCidrState
  {
    NOT_SET,
    PENDING_PROVISIONING,
    READY,
    PENDING_ADVERTISING,
    ADVERTISING,
    PENDING_WITHDRAWING,
    PENDING_DEPROVISIONING,
    DEPROVISIONED,
    FAILED_PROVISION,
    FAILED_ADVERTISING,
    FAILED_WITHDRAW,
    FAILED_DEPROVISION
  };

namespace ByoipCidrStateMapper
{
AWS_GLOBALACCELERATOR_API ByoipCidrState GetByoipCidrStateForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForByoipCidrState(ByoipCidrState value);
} // namespace ByoipCidrStateMapper
} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
