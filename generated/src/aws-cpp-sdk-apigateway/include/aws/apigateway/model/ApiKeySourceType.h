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
  enum class ApiKeySourceType
  {
    NOT_SET,
    HEADER,
    AUTHORIZER
  };

namespace ApiKeySourceTypeMapper
{
AWS_APIGATEWAY_API ApiKeySourceType GetApiKeySourceTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForApiKeySourceType(ApiKeySourceType value);
} // namespace ApiKeySourceTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
