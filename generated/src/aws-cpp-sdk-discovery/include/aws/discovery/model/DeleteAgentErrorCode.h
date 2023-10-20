/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class DeleteAgentErrorCode
  {
    NOT_SET,
    NOT_FOUND,
    INTERNAL_SERVER_ERROR,
    AGENT_IN_USE
  };

namespace DeleteAgentErrorCodeMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API DeleteAgentErrorCode GetDeleteAgentErrorCodeForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForDeleteAgentErrorCode(DeleteAgentErrorCode value);
} // namespace DeleteAgentErrorCodeMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
