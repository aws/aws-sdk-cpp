/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EventBridge
{
namespace Model
{
  enum class ConnectionOAuthHttpMethod
  {
    NOT_SET,
    GET_,
    POST,
    PUT
  };

namespace ConnectionOAuthHttpMethodMapper
{
AWS_EVENTBRIDGE_API ConnectionOAuthHttpMethod GetConnectionOAuthHttpMethodForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForConnectionOAuthHttpMethod(ConnectionOAuthHttpMethod value);
} // namespace ConnectionOAuthHttpMethodMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
