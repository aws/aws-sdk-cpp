/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvents
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
AWS_CLOUDWATCHEVENTS_API ConnectionOAuthHttpMethod GetConnectionOAuthHttpMethodForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForConnectionOAuthHttpMethod(ConnectionOAuthHttpMethod value);
} // namespace ConnectionOAuthHttpMethodMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
