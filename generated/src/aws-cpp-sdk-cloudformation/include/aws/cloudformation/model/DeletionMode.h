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
  enum class DeletionMode
  {
    NOT_SET,
    STANDARD,
    FORCE_DELETE_STACK
  };

namespace DeletionModeMapper
{
AWS_CLOUDFORMATION_API DeletionMode GetDeletionModeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForDeletionMode(DeletionMode value);
} // namespace DeletionModeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
