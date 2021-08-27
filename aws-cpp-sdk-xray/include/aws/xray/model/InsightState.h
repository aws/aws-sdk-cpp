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
  enum class InsightState
  {
    NOT_SET,
    ACTIVE,
    CLOSED
  };

namespace InsightStateMapper
{
AWS_XRAY_API InsightState GetInsightStateForName(const Aws::String& name);

AWS_XRAY_API Aws::String GetNameForInsightState(InsightState value);
} // namespace InsightStateMapper
} // namespace Model
} // namespace XRay
} // namespace Aws
