/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{
  enum class GatewayType
  {
    NOT_SET,
    virtualPrivateGateway,
    transitGateway
  };

namespace GatewayTypeMapper
{
AWS_DIRECTCONNECT_API GatewayType GetGatewayTypeForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForGatewayType(GatewayType value);
} // namespace GatewayTypeMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
