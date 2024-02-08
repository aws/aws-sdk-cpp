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
  enum class GeneratedTemplateStatus
  {
    NOT_SET,
    CREATE_PENDING,
    UPDATE_PENDING,
    DELETE_PENDING,
    CREATE_IN_PROGRESS,
    UPDATE_IN_PROGRESS,
    DELETE_IN_PROGRESS,
    FAILED,
    COMPLETE
  };

namespace GeneratedTemplateStatusMapper
{
AWS_CLOUDFORMATION_API GeneratedTemplateStatus GetGeneratedTemplateStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForGeneratedTemplateStatus(GeneratedTemplateStatus value);
} // namespace GeneratedTemplateStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
