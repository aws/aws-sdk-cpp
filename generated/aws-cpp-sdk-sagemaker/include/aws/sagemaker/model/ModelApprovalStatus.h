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
  enum class ModelApprovalStatus
  {
    NOT_SET,
    Approved,
    Rejected,
    PendingManualApproval
  };

namespace ModelApprovalStatusMapper
{
AWS_SAGEMAKER_API ModelApprovalStatus GetModelApprovalStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelApprovalStatus(ModelApprovalStatus value);
} // namespace ModelApprovalStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
