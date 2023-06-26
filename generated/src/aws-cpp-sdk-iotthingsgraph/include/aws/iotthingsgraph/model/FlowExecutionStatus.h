/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{
  enum class FlowExecutionStatus
  {
    NOT_SET,
    RUNNING,
    ABORTED,
    SUCCEEDED,
    FAILED
  };

namespace FlowExecutionStatusMapper
{
AWS_IOTTHINGSGRAPH_API FlowExecutionStatus GetFlowExecutionStatusForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForFlowExecutionStatus(FlowExecutionStatus value);
} // namespace FlowExecutionStatusMapper
} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
