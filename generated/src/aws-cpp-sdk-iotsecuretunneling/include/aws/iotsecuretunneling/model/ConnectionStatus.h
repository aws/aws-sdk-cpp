/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{
  enum class ConnectionStatus
  {
    NOT_SET,
    CONNECTED,
    DISCONNECTED
  };

namespace ConnectionStatusMapper
{
AWS_IOTSECURETUNNELING_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_IOTSECURETUNNELING_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
} // namespace ConnectionStatusMapper
} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
