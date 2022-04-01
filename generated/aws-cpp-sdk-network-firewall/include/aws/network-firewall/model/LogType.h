/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{
  enum class LogType
  {
    NOT_SET,
    ALERT,
    FLOW
  };

namespace LogTypeMapper
{
AWS_NETWORKFIREWALL_API LogType GetLogTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForLogType(LogType value);
} // namespace LogTypeMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
