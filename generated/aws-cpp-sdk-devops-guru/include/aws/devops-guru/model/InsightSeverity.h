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
  enum class InsightSeverity
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH
  };

namespace InsightSeverityMapper
{
AWS_DEVOPSGURU_API InsightSeverity GetInsightSeverityForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForInsightSeverity(InsightSeverity value);
} // namespace InsightSeverityMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
