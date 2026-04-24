/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class ExecutionState { NOT_SET, RUNNING, COMPLETED, FAILED };

namespace ExecutionStateMapper {
AWS_IOTSITEWISE_API ExecutionState GetExecutionStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForExecutionState(ExecutionState value);
}  // namespace ExecutionStateMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
