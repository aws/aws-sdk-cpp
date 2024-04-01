/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class JobTemplateType
  {
    NOT_SET,
    JSON,
    YAML
  };

namespace JobTemplateTypeMapper
{
AWS_DEADLINE_API JobTemplateType GetJobTemplateTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForJobTemplateType(JobTemplateType value);
} // namespace JobTemplateTypeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
