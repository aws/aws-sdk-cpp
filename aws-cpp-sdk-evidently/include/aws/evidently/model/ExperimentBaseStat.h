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
  enum class ExperimentBaseStat
  {
    NOT_SET,
    Mean
  };

namespace ExperimentBaseStatMapper
{
AWS_CLOUDWATCHEVIDENTLY_API ExperimentBaseStat GetExperimentBaseStatForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForExperimentBaseStat(ExperimentBaseStat value);
} // namespace ExperimentBaseStatMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
