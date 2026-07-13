/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class ConnectorHealthStatus { NOT_SET, CONNECTED, DEGRADED, FAILED_TO_CONNECT, PENDING_AUTHORIZATION, PENDING_CONFIGURATION, UNKNOWN };

namespace ConnectorHealthStatusMapper {
AWS_INSPECTOR2_API ConnectorHealthStatus GetConnectorHealthStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForConnectorHealthStatus(ConnectorHealthStatus value);
}  // namespace ConnectorHealthStatusMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
