/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistry {
namespace Model {
enum class BatchGetDiscoverableRegistryRecordErrorCode { NOT_SET, RESOURCE_NOT_FOUND, ACCESS_DENIED, INTERNAL_ERROR };

namespace BatchGetDiscoverableRegistryRecordErrorCodeMapper {
AWS_AGENTREGISTRY_API BatchGetDiscoverableRegistryRecordErrorCode
GetBatchGetDiscoverableRegistryRecordErrorCodeForName(const Aws::String& name);

AWS_AGENTREGISTRY_API Aws::String GetNameForBatchGetDiscoverableRegistryRecordErrorCode(BatchGetDiscoverableRegistryRecordErrorCode value);
}  // namespace BatchGetDiscoverableRegistryRecordErrorCodeMapper
}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
