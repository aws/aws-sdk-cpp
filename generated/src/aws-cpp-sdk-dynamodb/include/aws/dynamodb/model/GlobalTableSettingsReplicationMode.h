/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

namespace Aws {
namespace DynamoDB {
namespace Model {
enum class GlobalTableSettingsReplicationMode { NOT_SET, ENABLED, DISABLED, ENABLED_WITH_OVERRIDES };

namespace GlobalTableSettingsReplicationModeMapper {
AWS_DYNAMODB_API GlobalTableSettingsReplicationMode GetGlobalTableSettingsReplicationModeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForGlobalTableSettingsReplicationMode(GlobalTableSettingsReplicationMode value);
}  // namespace GlobalTableSettingsReplicationModeMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
