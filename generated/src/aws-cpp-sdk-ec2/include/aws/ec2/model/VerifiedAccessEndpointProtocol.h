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
  enum class VerifiedAccessEndpointProtocol
  {
    NOT_SET,
    http,
    https
  };

namespace VerifiedAccessEndpointProtocolMapper
{
AWS_EC2_API VerifiedAccessEndpointProtocol GetVerifiedAccessEndpointProtocolForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVerifiedAccessEndpointProtocol(VerifiedAccessEndpointProtocol value);
} // namespace VerifiedAccessEndpointProtocolMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
