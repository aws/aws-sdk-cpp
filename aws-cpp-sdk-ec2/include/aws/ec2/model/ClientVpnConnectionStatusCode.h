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
  enum class ClientVpnConnectionStatusCode
  {
    NOT_SET,
    active,
    failed_to_terminate,
    terminating,
    terminated
  };

namespace ClientVpnConnectionStatusCodeMapper
{
AWS_EC2_API ClientVpnConnectionStatusCode GetClientVpnConnectionStatusCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForClientVpnConnectionStatusCode(ClientVpnConnectionStatusCode value);
} // namespace ClientVpnConnectionStatusCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
