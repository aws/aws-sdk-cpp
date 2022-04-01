/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{
  enum class ApprovalState
  {
    NOT_SET,
    APPROVE,
    REVOKE
  };

namespace ApprovalStateMapper
{
AWS_CODECOMMIT_API ApprovalState GetApprovalStateForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForApprovalState(ApprovalState value);
} // namespace ApprovalStateMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
