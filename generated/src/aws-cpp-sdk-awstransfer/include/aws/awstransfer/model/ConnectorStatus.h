/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Transfer {
namespace Model {
enum class ConnectorStatus { NOT_SET, ACTIVE, ERRORED, PENDING };

namespace ConnectorStatusMapper {
AWS_TRANSFER_API ConnectorStatus GetConnectorStatusForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForConnectorStatus(ConnectorStatus value);
}  // namespace ConnectorStatusMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
