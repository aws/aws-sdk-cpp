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
  enum class EndpointType
  {
    NOT_SET,
    REGIONAL,
    EDGE,
    PRIVATE_
  };

namespace EndpointTypeMapper
{
AWS_APIGATEWAY_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForEndpointType(EndpointType value);
} // namespace EndpointTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
