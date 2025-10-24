/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ApplicationSignals {
namespace Model {
enum class ConnectionType { NOT_SET, INDIRECT, DIRECT };

namespace ConnectionTypeMapper {
AWS_APPLICATIONSIGNALS_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForConnectionType(ConnectionType value);
}  // namespace ConnectionTypeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
