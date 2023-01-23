/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class WorkflowStepType
  {
    NOT_SET,
    COPY,
    CUSTOM,
    TAG,
    DELETE_,
    DECRYPT
  };

namespace WorkflowStepTypeMapper
{
AWS_TRANSFER_API WorkflowStepType GetWorkflowStepTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForWorkflowStepType(WorkflowStepType value);
} // namespace WorkflowStepTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
