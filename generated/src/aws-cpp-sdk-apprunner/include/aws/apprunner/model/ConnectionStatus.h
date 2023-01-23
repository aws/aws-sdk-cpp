/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class ConnectionStatus
  {
    NOT_SET,
    PENDING_HANDSHAKE,
    AVAILABLE,
    ERROR_,
    DELETED
  };

namespace ConnectionStatusMapper
{
AWS_APPRUNNER_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
} // namespace ConnectionStatusMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
