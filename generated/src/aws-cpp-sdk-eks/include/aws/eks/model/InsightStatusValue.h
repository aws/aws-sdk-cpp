/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class InsightStatusValue
  {
    NOT_SET,
    PASSING,
    WARNING,
    ERROR_,
    UNKNOWN
  };

namespace InsightStatusValueMapper
{
AWS_EKS_API InsightStatusValue GetInsightStatusValueForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForInsightStatusValue(InsightStatusValue value);
} // namespace InsightStatusValueMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
