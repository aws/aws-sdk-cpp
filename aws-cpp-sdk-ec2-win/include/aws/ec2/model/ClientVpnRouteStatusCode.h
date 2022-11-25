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
  enum class ClientVpnRouteStatusCode
  {
    NOT_SET,
    creating,
    active,
    failed,
    deleting
  };

namespace ClientVpnRouteStatusCodeMapper
{
AWS_EC2_API ClientVpnRouteStatusCode GetClientVpnRouteStatusCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForClientVpnRouteStatusCode(ClientVpnRouteStatusCode value);
} // namespace ClientVpnRouteStatusCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
