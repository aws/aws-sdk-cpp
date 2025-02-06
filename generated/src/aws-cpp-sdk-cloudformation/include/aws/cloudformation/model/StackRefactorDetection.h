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
  enum class StackRefactorDetection
  {
    NOT_SET,
    AUTO,
    MANUAL
  };

namespace StackRefactorDetectionMapper
{
AWS_CLOUDFORMATION_API StackRefactorDetection GetStackRefactorDetectionForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackRefactorDetection(StackRefactorDetection value);
} // namespace StackRefactorDetectionMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
