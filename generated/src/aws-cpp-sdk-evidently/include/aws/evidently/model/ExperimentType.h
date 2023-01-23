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
  enum class ExperimentType
  {
    NOT_SET,
    aws_evidently_onlineab
  };

namespace ExperimentTypeMapper
{
AWS_CLOUDWATCHEVIDENTLY_API ExperimentType GetExperimentTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForExperimentType(ExperimentType value);
} // namespace ExperimentTypeMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
