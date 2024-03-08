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
  enum class GeneratedTemplateDeletionPolicy
  {
    NOT_SET,
    DELETE_,
    RETAIN
  };

namespace GeneratedTemplateDeletionPolicyMapper
{
AWS_CLOUDFORMATION_API GeneratedTemplateDeletionPolicy GetGeneratedTemplateDeletionPolicyForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForGeneratedTemplateDeletionPolicy(GeneratedTemplateDeletionPolicy value);
} // namespace GeneratedTemplateDeletionPolicyMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
