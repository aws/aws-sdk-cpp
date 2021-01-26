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
  enum class IntegrationType
  {
    NOT_SET,
    HTTP,
    AWS,
    MOCK,
    HTTP_PROXY,
    AWS_PROXY
  };

namespace IntegrationTypeMapper
{
AWS_APIGATEWAY_API IntegrationType GetIntegrationTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForIntegrationType(IntegrationType value);
} // namespace IntegrationTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
