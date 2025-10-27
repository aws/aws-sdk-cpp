/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/EventBridge_EXPORTS.h>

namespace Aws {
namespace EventBridge {
namespace Model {
enum class ReplicationState { NOT_SET, ENABLED, DISABLED };

namespace ReplicationStateMapper {
AWS_EVENTBRIDGE_API ReplicationState GetReplicationStateForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForReplicationState(ReplicationState value);
}  // namespace ReplicationStateMapper
}  // namespace Model
}  // namespace EventBridge
}  // namespace Aws
