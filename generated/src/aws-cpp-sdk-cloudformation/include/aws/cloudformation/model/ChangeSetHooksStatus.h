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
  enum class ChangeSetHooksStatus
  {
    NOT_SET,
    PLANNING,
    PLANNED,
    UNAVAILABLE
  };

namespace ChangeSetHooksStatusMapper
{
AWS_CLOUDFORMATION_API ChangeSetHooksStatus GetChangeSetHooksStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForChangeSetHooksStatus(ChangeSetHooksStatus value);
} // namespace ChangeSetHooksStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
