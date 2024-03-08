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
  enum class GeneratedTemplateUpdateReplacePolicy
  {
    NOT_SET,
    DELETE_,
    RETAIN
  };

namespace GeneratedTemplateUpdateReplacePolicyMapper
{
AWS_CLOUDFORMATION_API GeneratedTemplateUpdateReplacePolicy GetGeneratedTemplateUpdateReplacePolicyForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForGeneratedTemplateUpdateReplacePolicy(GeneratedTemplateUpdateReplacePolicy value);
} // namespace GeneratedTemplateUpdateReplacePolicyMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
