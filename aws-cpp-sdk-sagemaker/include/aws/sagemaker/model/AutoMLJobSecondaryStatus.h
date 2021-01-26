/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class AutoMLJobSecondaryStatus
  {
    NOT_SET,
    Starting,
    AnalyzingData,
    FeatureEngineering,
    ModelTuning,
    MaxCandidatesReached,
    Failed,
    Stopped,
    MaxAutoMLJobRuntimeReached,
    Stopping,
    CandidateDefinitionsGenerated
  };

namespace AutoMLJobSecondaryStatusMapper
{
AWS_SAGEMAKER_API AutoMLJobSecondaryStatus GetAutoMLJobSecondaryStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus value);
} // namespace AutoMLJobSecondaryStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
