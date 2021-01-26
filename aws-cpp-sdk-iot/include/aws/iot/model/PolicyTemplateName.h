/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class PolicyTemplateName
  {
    NOT_SET,
    BLANK_POLICY
  };

namespace PolicyTemplateNameMapper
{
AWS_IOT_API PolicyTemplateName GetPolicyTemplateNameForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForPolicyTemplateName(PolicyTemplateName value);
} // namespace PolicyTemplateNameMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
