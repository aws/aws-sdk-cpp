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
  enum class TunnelStatus
  {
    NOT_SET,
    OPEN,
    CLOSED
  };

namespace TunnelStatusMapper
{
AWS_IOTSECURETUNNELING_API TunnelStatus GetTunnelStatusForName(const Aws::String& name);

AWS_IOTSECURETUNNELING_API Aws::String GetNameForTunnelStatus(TunnelStatus value);
} // namespace TunnelStatusMapper
} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
