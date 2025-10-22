/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class OutboundStrategyType
  {
    NOT_SET,
    AGENT_FIRST
  };

namespace OutboundStrategyTypeMapper
{
AWS_CONNECT_API OutboundStrategyType GetOutboundStrategyTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForOutboundStrategyType(OutboundStrategyType value);
} // namespace OutboundStrategyTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
