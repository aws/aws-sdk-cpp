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
  enum class GatewayResponseType
  {
    NOT_SET,
    DEFAULT_4XX,
    DEFAULT_5XX,
    RESOURCE_NOT_FOUND,
    UNAUTHORIZED,
    INVALID_API_KEY,
    ACCESS_DENIED,
    AUTHORIZER_FAILURE,
    AUTHORIZER_CONFIGURATION_ERROR,
    INVALID_SIGNATURE,
    EXPIRED_TOKEN,
    MISSING_AUTHENTICATION_TOKEN,
    INTEGRATION_FAILURE,
    INTEGRATION_TIMEOUT,
    API_CONFIGURATION_ERROR,
    UNSUPPORTED_MEDIA_TYPE,
    BAD_REQUEST_PARAMETERS,
    BAD_REQUEST_BODY,
    REQUEST_TOO_LARGE,
    THROTTLED,
    QUOTA_EXCEEDED,
    WAF_FILTERED
  };

namespace GatewayResponseTypeMapper
{
AWS_APIGATEWAY_API GatewayResponseType GetGatewayResponseTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForGatewayResponseType(GatewayResponseType value);
} // namespace GatewayResponseTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
