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
  enum class VpcBlockPublicAccessState
  {
    NOT_SET,
    default_state,
    update_in_progress,
    update_complete
  };

namespace VpcBlockPublicAccessStateMapper
{
AWS_EC2_API VpcBlockPublicAccessState GetVpcBlockPublicAccessStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVpcBlockPublicAccessState(VpcBlockPublicAccessState value);
} // namespace VpcBlockPublicAccessStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
