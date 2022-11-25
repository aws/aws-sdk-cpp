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
  enum class ClientVpnEndpointStatusCode
  {
    NOT_SET,
    pending_associate,
    available,
    deleting,
    deleted
  };

namespace ClientVpnEndpointStatusCodeMapper
{
AWS_EC2_API ClientVpnEndpointStatusCode GetClientVpnEndpointStatusCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForClientVpnEndpointStatusCode(ClientVpnEndpointStatusCode value);
} // namespace ClientVpnEndpointStatusCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
