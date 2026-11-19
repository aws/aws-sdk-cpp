/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
enum class ConnectivityState { NOT_SET, PROVISIONING, PROVISION_FAILED, ACTIVE };

namespace ConnectivityStateMapper {
AWS_EVENTBRIDGEV2_API ConnectivityState GetConnectivityStateForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForConnectivityState(ConnectivityState value);
}  // namespace ConnectivityStateMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
