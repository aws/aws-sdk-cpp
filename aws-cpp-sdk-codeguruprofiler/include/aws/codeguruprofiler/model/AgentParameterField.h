/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{
  enum class AgentParameterField
  {
    NOT_SET,
    SamplingIntervalInMilliseconds,
    ReportingIntervalInMilliseconds,
    MinimumTimeForReportingInMilliseconds,
    MemoryUsageLimitPercent,
    MaxStackDepth
  };

namespace AgentParameterFieldMapper
{
AWS_CODEGURUPROFILER_API AgentParameterField GetAgentParameterFieldForName(const Aws::String& name);

AWS_CODEGURUPROFILER_API Aws::String GetNameForAgentParameterField(AgentParameterField value);
} // namespace AgentParameterFieldMapper
} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
