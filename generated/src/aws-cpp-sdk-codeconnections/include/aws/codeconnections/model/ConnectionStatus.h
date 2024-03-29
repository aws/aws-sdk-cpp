/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{
  enum class ConnectionStatus
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    ERROR_
  };

namespace ConnectionStatusMapper
{
AWS_CODECONNECTIONS_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_CODECONNECTIONS_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
} // namespace ConnectionStatusMapper
} // namespace Model
} // namespace CodeConnections
} // namespace Aws
