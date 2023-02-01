/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class FlowStatus
  {
    NOT_SET,
    Active,
    Deprecated,
    Deleted,
    Draft,
    Errored,
    Suspended
  };

namespace FlowStatusMapper
{
AWS_APPFLOW_API FlowStatus GetFlowStatusForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForFlowStatus(FlowStatus value);
} // namespace FlowStatusMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
