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
  enum class ConnectionType
  {
    NOT_SET,
    INTERNET,
    VPC_LINK
  };

namespace ConnectionTypeMapper
{
AWS_APIGATEWAY_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForConnectionType(ConnectionType value);
} // namespace ConnectionTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
