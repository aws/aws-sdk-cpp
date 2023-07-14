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
  enum class ApiKeysFormat
  {
    NOT_SET,
    csv
  };

namespace ApiKeysFormatMapper
{
AWS_APIGATEWAY_API ApiKeysFormat GetApiKeysFormatForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForApiKeysFormat(ApiKeysFormat value);
} // namespace ApiKeysFormatMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
