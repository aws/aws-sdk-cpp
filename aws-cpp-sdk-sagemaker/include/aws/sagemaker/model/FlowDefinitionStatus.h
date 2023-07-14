/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class FlowDefinitionStatus
  {
    NOT_SET,
    Initializing,
    Active,
    Failed,
    Deleting
  };

namespace FlowDefinitionStatusMapper
{
AWS_SAGEMAKER_API FlowDefinitionStatus GetFlowDefinitionStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFlowDefinitionStatus(FlowDefinitionStatus value);
} // namespace FlowDefinitionStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
