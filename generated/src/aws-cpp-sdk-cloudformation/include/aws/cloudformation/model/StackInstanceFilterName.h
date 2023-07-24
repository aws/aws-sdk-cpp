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
  enum class StackInstanceFilterName
  {
    NOT_SET,
    DETAILED_STATUS,
    LAST_OPERATION_ID,
    DRIFT_STATUS
  };

namespace StackInstanceFilterNameMapper
{
AWS_CLOUDFORMATION_API StackInstanceFilterName GetStackInstanceFilterNameForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackInstanceFilterName(StackInstanceFilterName value);
} // namespace StackInstanceFilterNameMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
