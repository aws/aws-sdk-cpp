/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
  enum class AnomalyDetectorStateValue
  {
    NOT_SET,
    PENDING_TRAINING,
    TRAINED_INSUFFICIENT_DATA,
    TRAINED
  };

namespace AnomalyDetectorStateValueMapper
{
AWS_CLOUDWATCH_API AnomalyDetectorStateValue GetAnomalyDetectorStateValueForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForAnomalyDetectorStateValue(AnomalyDetectorStateValue value);
} // namespace AnomalyDetectorStateValueMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
