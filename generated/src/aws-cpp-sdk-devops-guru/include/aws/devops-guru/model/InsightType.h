/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class InsightType
  {
    NOT_SET,
    REACTIVE,
    PROACTIVE
  };

namespace InsightTypeMapper
{
AWS_DEVOPSGURU_API InsightType GetInsightTypeForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForInsightType(InsightType value);
} // namespace InsightTypeMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
