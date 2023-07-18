/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class AnomalyDetectorFailureType
  {
    NOT_SET,
    ACTIVATION_FAILURE,
    BACK_TEST_ACTIVATION_FAILURE,
    DELETION_FAILURE,
    DEACTIVATION_FAILURE
  };

namespace AnomalyDetectorFailureTypeMapper
{
AWS_LOOKOUTMETRICS_API AnomalyDetectorFailureType GetAnomalyDetectorFailureTypeForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForAnomalyDetectorFailureType(AnomalyDetectorFailureType value);
} // namespace AnomalyDetectorFailureTypeMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
