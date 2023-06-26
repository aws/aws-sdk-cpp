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
  enum class AgentStatusType
  {
    NOT_SET,
    ROUTABLE,
    CUSTOM,
    OFFLINE
  };

namespace AgentStatusTypeMapper
{
AWS_CONNECT_API AgentStatusType GetAgentStatusTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAgentStatusType(AgentStatusType value);
} // namespace AgentStatusTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
