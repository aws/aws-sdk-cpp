/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{
  enum class ExperimentResultRequestType
  {
    NOT_SET,
    BaseStat,
    TreatmentEffect,
    ConfidenceInterval,
    PValue
  };

namespace ExperimentResultRequestTypeMapper
{
AWS_CLOUDWATCHEVIDENTLY_API ExperimentResultRequestType GetExperimentResultRequestTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForExperimentResultRequestType(ExperimentResultRequestType value);
} // namespace ExperimentResultRequestTypeMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
