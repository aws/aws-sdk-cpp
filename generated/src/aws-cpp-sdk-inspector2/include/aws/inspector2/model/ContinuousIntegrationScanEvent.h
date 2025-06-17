/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class ContinuousIntegrationScanEvent
  {
    NOT_SET,
    PULL_REQUEST,
    PUSH
  };

namespace ContinuousIntegrationScanEventMapper
{
AWS_INSPECTOR2_API ContinuousIntegrationScanEvent GetContinuousIntegrationScanEventForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForContinuousIntegrationScanEvent(ContinuousIntegrationScanEvent value);
} // namespace ContinuousIntegrationScanEventMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
