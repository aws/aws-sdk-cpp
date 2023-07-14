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
  enum class IpamPoolState
  {
    NOT_SET,
    create_in_progress,
    create_complete,
    create_failed,
    modify_in_progress,
    modify_complete,
    modify_failed,
    delete_in_progress,
    delete_complete,
    delete_failed,
    isolate_in_progress,
    isolate_complete,
    restore_in_progress
  };

namespace IpamPoolStateMapper
{
AWS_EC2_API IpamPoolState GetIpamPoolStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPoolState(IpamPoolState value);
} // namespace IpamPoolStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
