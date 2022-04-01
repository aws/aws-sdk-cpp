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
  enum class AcceleratorStatus
  {
    NOT_SET,
    DEPLOYED,
    IN_PROGRESS
  };

namespace AcceleratorStatusMapper
{
AWS_GLOBALACCELERATOR_API AcceleratorStatus GetAcceleratorStatusForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForAcceleratorStatus(AcceleratorStatus value);
} // namespace AcceleratorStatusMapper
} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
