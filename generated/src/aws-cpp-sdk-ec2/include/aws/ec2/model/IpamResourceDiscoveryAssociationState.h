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
  enum class IpamResourceDiscoveryAssociationState
  {
    NOT_SET,
    associate_in_progress,
    associate_complete,
    associate_failed,
    disassociate_in_progress,
    disassociate_complete,
    disassociate_failed,
    isolate_in_progress,
    isolate_complete,
    restore_in_progress
  };

namespace IpamResourceDiscoveryAssociationStateMapper
{
AWS_EC2_API IpamResourceDiscoveryAssociationState GetIpamResourceDiscoveryAssociationStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamResourceDiscoveryAssociationState(IpamResourceDiscoveryAssociationState value);
} // namespace IpamResourceDiscoveryAssociationStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
