/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  enum class PartialResultsStability
  {
    NOT_SET,
    high,
    medium,
    low
  };

namespace PartialResultsStabilityMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API PartialResultsStability GetPartialResultsStabilityForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForPartialResultsStability(PartialResultsStability value);
} // namespace PartialResultsStabilityMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
