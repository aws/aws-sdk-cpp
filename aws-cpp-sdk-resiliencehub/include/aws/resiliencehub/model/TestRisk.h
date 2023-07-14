/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class TestRisk
  {
    NOT_SET,
    Small,
    Medium,
    High
  };

namespace TestRiskMapper
{
AWS_RESILIENCEHUB_API TestRisk GetTestRiskForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForTestRisk(TestRisk value);
} // namespace TestRiskMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
