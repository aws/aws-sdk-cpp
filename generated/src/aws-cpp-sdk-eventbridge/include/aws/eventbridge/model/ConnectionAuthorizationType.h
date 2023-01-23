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
  enum class ConnectionAuthorizationType
  {
    NOT_SET,
    BASIC,
    OAUTH_CLIENT_CREDENTIALS,
    API_KEY
  };

namespace ConnectionAuthorizationTypeMapper
{
AWS_EVENTBRIDGE_API ConnectionAuthorizationType GetConnectionAuthorizationTypeForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForConnectionAuthorizationType(ConnectionAuthorizationType value);
} // namespace ConnectionAuthorizationTypeMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
