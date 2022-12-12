/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMakerMetrics
{
namespace Model
{
  enum class PutMetricsErrorCode
  {
    NOT_SET,
    METRIC_LIMIT_EXCEEDED,
    INTERNAL_ERROR,
    VALIDATION_ERROR,
    CONFLICT_ERROR
  };

namespace PutMetricsErrorCodeMapper
{
AWS_SAGEMAKERMETRICS_API PutMetricsErrorCode GetPutMetricsErrorCodeForName(const Aws::String& name);

AWS_SAGEMAKERMETRICS_API Aws::String GetNameForPutMetricsErrorCode(PutMetricsErrorCode value);
} // namespace PutMetricsErrorCodeMapper
} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
