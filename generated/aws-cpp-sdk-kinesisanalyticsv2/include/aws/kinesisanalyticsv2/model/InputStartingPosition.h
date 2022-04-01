/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{
  enum class InputStartingPosition
  {
    NOT_SET,
    NOW,
    TRIM_HORIZON,
    LAST_STOPPED_POINT
  };

namespace InputStartingPositionMapper
{
AWS_KINESISANALYTICSV2_API InputStartingPosition GetInputStartingPositionForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForInputStartingPosition(InputStartingPosition value);
} // namespace InputStartingPositionMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
