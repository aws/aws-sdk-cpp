/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace XRay
{
namespace Model
{
  enum class SamplingStrategyName
  {
    NOT_SET,
    PartialScan,
    FixedRate
  };

namespace SamplingStrategyNameMapper
{
AWS_XRAY_API SamplingStrategyName GetSamplingStrategyNameForName(const Aws::String& name);

AWS_XRAY_API Aws::String GetNameForSamplingStrategyName(SamplingStrategyName value);
} // namespace SamplingStrategyNameMapper
} // namespace Model
} // namespace XRay
} // namespace Aws
