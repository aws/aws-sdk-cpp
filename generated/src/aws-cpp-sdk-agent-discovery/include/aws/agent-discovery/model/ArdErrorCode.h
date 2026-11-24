/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentDiscovery {
namespace Model {
enum class ArdErrorCode { NOT_SET, INVALID_ARGUMENT, UNAUTHENTICATED, NOT_FOUND, RATE_LIMIT_EXCEEDED, INTERNAL_ERROR };

namespace ArdErrorCodeMapper {
AWS_AGENTDISCOVERY_API ArdErrorCode GetArdErrorCodeForName(const Aws::String& name);

AWS_AGENTDISCOVERY_API Aws::String GetNameForArdErrorCode(ArdErrorCode value);
}  // namespace ArdErrorCodeMapper
}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
