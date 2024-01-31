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
  enum class TemplateFormat
  {
    NOT_SET,
    JSON,
    YAML
  };

namespace TemplateFormatMapper
{
AWS_CLOUDFORMATION_API TemplateFormat GetTemplateFormatForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForTemplateFormat(TemplateFormat value);
} // namespace TemplateFormatMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
