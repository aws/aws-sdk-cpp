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
  enum class UnauthorizedCacheControlHeaderStrategy
  {
    NOT_SET,
    FAIL_WITH_403,
    SUCCEED_WITH_RESPONSE_HEADER,
    SUCCEED_WITHOUT_RESPONSE_HEADER
  };

namespace UnauthorizedCacheControlHeaderStrategyMapper
{
AWS_APIGATEWAY_API UnauthorizedCacheControlHeaderStrategy GetUnauthorizedCacheControlHeaderStrategyForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForUnauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategy value);
} // namespace UnauthorizedCacheControlHeaderStrategyMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
