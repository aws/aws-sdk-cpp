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
  enum class VerifiedAccessEndpointStatusCode
  {
    NOT_SET,
    pending,
    active,
    updating,
    deleting,
    deleted
  };

namespace VerifiedAccessEndpointStatusCodeMapper
{
AWS_EC2_API VerifiedAccessEndpointStatusCode GetVerifiedAccessEndpointStatusCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVerifiedAccessEndpointStatusCode(VerifiedAccessEndpointStatusCode value);
} // namespace VerifiedAccessEndpointStatusCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
