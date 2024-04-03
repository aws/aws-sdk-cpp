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
  enum class PolicyAction
  {
    NOT_SET,
    Delete,
    Retain,
    Snapshot,
    ReplaceAndDelete,
    ReplaceAndRetain,
    ReplaceAndSnapshot
  };

namespace PolicyActionMapper
{
AWS_CLOUDFORMATION_API PolicyAction GetPolicyActionForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForPolicyAction(PolicyAction value);
} // namespace PolicyActionMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
