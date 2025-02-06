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
  enum class StackRefactorActionEntity
  {
    NOT_SET,
    RESOURCE,
    STACK
  };

namespace StackRefactorActionEntityMapper
{
AWS_CLOUDFORMATION_API StackRefactorActionEntity GetStackRefactorActionEntityForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackRefactorActionEntity(StackRefactorActionEntity value);
} // namespace StackRefactorActionEntityMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
