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
  enum class GeneratedTemplateResourceStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    FAILED,
    COMPLETE
  };

namespace GeneratedTemplateResourceStatusMapper
{
AWS_CLOUDFORMATION_API GeneratedTemplateResourceStatus GetGeneratedTemplateResourceStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForGeneratedTemplateResourceStatus(GeneratedTemplateResourceStatus value);
} // namespace GeneratedTemplateResourceStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
