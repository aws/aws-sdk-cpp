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
enum class ComputeNodeExecutionState { NOT_SET, NOT_STARTED, QUEUED, RUNNING, SUCCEEDED, FAILED };

namespace ComputeNodeExecutionStateMapper {
AWS_IOTSITEWISE_API ComputeNodeExecutionState GetComputeNodeExecutionStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForComputeNodeExecutionState(ComputeNodeExecutionState value);
}  // namespace ComputeNodeExecutionStateMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
