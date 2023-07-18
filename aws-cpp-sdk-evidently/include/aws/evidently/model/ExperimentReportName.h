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
  enum class ExperimentReportName
  {
    NOT_SET,
    BayesianInference
  };

namespace ExperimentReportNameMapper
{
AWS_CLOUDWATCHEVIDENTLY_API ExperimentReportName GetExperimentReportNameForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForExperimentReportName(ExperimentReportName value);
} // namespace ExperimentReportNameMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
