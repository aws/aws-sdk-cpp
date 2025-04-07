/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
  enum class Trace
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    ENABLED_FULL
  };

namespace TraceMapper
{
AWS_BEDROCKRUNTIME_API Trace GetTraceForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForTrace(Trace value);
} // namespace TraceMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
