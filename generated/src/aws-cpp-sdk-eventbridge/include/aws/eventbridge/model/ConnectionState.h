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
  enum class ConnectionState
  {
    NOT_SET,
    CREATING,
    UPDATING,
    DELETING,
    AUTHORIZED,
    DEAUTHORIZED,
    AUTHORIZING,
    DEAUTHORIZING
  };

namespace ConnectionStateMapper
{
AWS_EVENTBRIDGE_API ConnectionState GetConnectionStateForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForConnectionState(ConnectionState value);
} // namespace ConnectionStateMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
