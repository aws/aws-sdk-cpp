/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    QUOTA_EXCEEDED
  };

namespace GatewayResponseTypeMapper
{
AWS_APIGATEWAY_API GatewayResponseType GetGatewayResponseTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForGatewayResponseType(GatewayResponseType value);
} // namespace GatewayResponseTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
