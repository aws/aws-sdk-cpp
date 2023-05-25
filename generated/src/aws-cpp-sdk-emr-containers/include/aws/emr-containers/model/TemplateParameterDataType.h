/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{
  enum class TemplateParameterDataType
  {
    NOT_SET,
    NUMBER,
    STRING
  };

namespace TemplateParameterDataTypeMapper
{
AWS_EMRCONTAINERS_API TemplateParameterDataType GetTemplateParameterDataTypeForName(const Aws::String& name);

AWS_EMRCONTAINERS_API Aws::String GetNameForTemplateParameterDataType(TemplateParameterDataType value);
} // namespace TemplateParameterDataTypeMapper
} // namespace Model
} // namespace EMRContainers
} // namespace Aws
