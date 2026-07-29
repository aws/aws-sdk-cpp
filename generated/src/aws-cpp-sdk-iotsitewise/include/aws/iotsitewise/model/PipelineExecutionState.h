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
enum class PipelineExecutionState { NOT_SET, NOT_STARTED, RUNNING, SUCCEEDED, FAILED, CANCELLING, CANCELLED };

namespace PipelineExecutionStateMapper {
AWS_IOTSITEWISE_API PipelineExecutionState GetPipelineExecutionStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForPipelineExecutionState(PipelineExecutionState value);
}  // namespace PipelineExecutionStateMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
