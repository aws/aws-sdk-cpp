/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FIS
{
namespace Model
{
  enum class ExperimentReportStatus
  {
    NOT_SET,
    pending,
    running,
    completed,
    cancelled,
    failed
  };

namespace ExperimentReportStatusMapper
{
AWS_FIS_API ExperimentReportStatus GetExperimentReportStatusForName(const Aws::String& name);

AWS_FIS_API Aws::String GetNameForExperimentReportStatus(ExperimentReportStatus value);
} // namespace ExperimentReportStatusMapper
} // namespace Model
} // namespace FIS
} // namespace Aws
