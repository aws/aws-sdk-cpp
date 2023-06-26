/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class ApprovalStatus
  {
    NOT_SET,
    Approved,
    Rejected
  };

namespace ApprovalStatusMapper
{
AWS_CODEPIPELINE_API ApprovalStatus GetApprovalStatusForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForApprovalStatus(ApprovalStatus value);
} // namespace ApprovalStatusMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
