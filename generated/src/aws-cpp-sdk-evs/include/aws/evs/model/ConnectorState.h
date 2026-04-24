/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVS_EXPORTS.h>

namespace Aws {
namespace EVS {
namespace Model {
enum class ConnectorState { NOT_SET, CREATING, CREATE_FAILED, ACTIVE, UPDATING, UPDATE_FAILED, DELETING, DELETED };

namespace ConnectorStateMapper {
AWS_EVS_API ConnectorState GetConnectorStateForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForConnectorState(ConnectorState value);
}  // namespace ConnectorStateMapper
}  // namespace Model
}  // namespace EVS
}  // namespace Aws
