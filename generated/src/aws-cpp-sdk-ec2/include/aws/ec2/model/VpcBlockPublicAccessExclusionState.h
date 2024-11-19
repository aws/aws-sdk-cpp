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
  enum class VpcBlockPublicAccessExclusionState
  {
    NOT_SET,
    create_in_progress,
    create_complete,
    create_failed,
    update_in_progress,
    update_complete,
    update_failed,
    delete_in_progress,
    delete_complete,
    disable_in_progress,
    disable_complete
  };

namespace VpcBlockPublicAccessExclusionStateMapper
{
AWS_EC2_API VpcBlockPublicAccessExclusionState GetVpcBlockPublicAccessExclusionStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVpcBlockPublicAccessExclusionState(VpcBlockPublicAccessExclusionState value);
} // namespace VpcBlockPublicAccessExclusionStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
