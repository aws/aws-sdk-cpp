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
  enum class EnvironmentTemplateType
  {
    NOT_SET,
    JSON,
    YAML
  };

namespace EnvironmentTemplateTypeMapper
{
AWS_DEADLINE_API EnvironmentTemplateType GetEnvironmentTemplateTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForEnvironmentTemplateType(EnvironmentTemplateType value);
} // namespace EnvironmentTemplateTypeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
