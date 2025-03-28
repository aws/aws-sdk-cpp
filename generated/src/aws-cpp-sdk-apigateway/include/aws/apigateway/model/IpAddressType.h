/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{
  enum class IpAddressType
  {
    NOT_SET,
    ipv4,
    dualstack
  };

namespace IpAddressTypeMapper
{
AWS_APIGATEWAY_API IpAddressType GetIpAddressTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForIpAddressType(IpAddressType value);
} // namespace IpAddressTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
