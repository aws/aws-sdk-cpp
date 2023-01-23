/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{
  enum class IntegrationType
  {
    NOT_SET,
    AWS,
    HTTP,
    MOCK,
    HTTP_PROXY,
    AWS_PROXY
  };

namespace IntegrationTypeMapper
{
AWS_APIGATEWAYV2_API IntegrationType GetIntegrationTypeForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForIntegrationType(IntegrationType value);
} // namespace IntegrationTypeMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
