/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class AccountGateStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    SKIPPED
  };

namespace AccountGateStatusMapper
{
AWS_CLOUDFORMATION_API AccountGateStatus GetAccountGateStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForAccountGateStatus(AccountGateStatus value);
} // namespace AccountGateStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
