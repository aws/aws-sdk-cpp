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
  enum class Confidence
  {
    NOT_SET,
    HIGH,
    LOW,
    NONE
  };

namespace ConfidenceMapper
{
AWS_LOOKOUTMETRICS_API Confidence GetConfidenceForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForConfidence(Confidence value);
} // namespace ConfidenceMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
