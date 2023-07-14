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
  enum class CancelSpotInstanceRequestState
  {
    NOT_SET,
    active,
    open,
    closed,
    cancelled,
    completed
  };

namespace CancelSpotInstanceRequestStateMapper
{
AWS_EC2_API CancelSpotInstanceRequestState GetCancelSpotInstanceRequestStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCancelSpotInstanceRequestState(CancelSpotInstanceRequestState value);
} // namespace CancelSpotInstanceRequestStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
