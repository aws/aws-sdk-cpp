/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class ConnectionStatus { NOT_SET, READY, IN_PROGRESS, FAILED };

namespace ConnectionStatusMapper {
AWS_GLUE_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
}  // namespace ConnectionStatusMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
