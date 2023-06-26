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
  enum class VerifiedAccessEndpointType
  {
    NOT_SET,
    load_balancer,
    network_interface
  };

namespace VerifiedAccessEndpointTypeMapper
{
AWS_EC2_API VerifiedAccessEndpointType GetVerifiedAccessEndpointTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVerifiedAccessEndpointType(VerifiedAccessEndpointType value);
} // namespace VerifiedAccessEndpointTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
