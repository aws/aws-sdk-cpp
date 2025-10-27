/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>

namespace Aws {
namespace CloudWatchEvidently {
namespace Model {
enum class ExperimentResultResponseType {
  NOT_SET,
  Mean,
  TreatmentEffect,
  ConfidenceIntervalUpperBound,
  ConfidenceIntervalLowerBound,
  PValue
};

namespace ExperimentResultResponseTypeMapper {
AWS_CLOUDWATCHEVIDENTLY_API ExperimentResultResponseType GetExperimentResultResponseTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForExperimentResultResponseType(ExperimentResultResponseType value);
}  // namespace ExperimentResultResponseTypeMapper
}  // namespace Model
}  // namespace CloudWatchEvidently
}  // namespace Aws
