/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisAnalytics
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
AWS_KINESISANALYTICS_API InputStartingPosition GetInputStartingPositionForName(const Aws::String& name);

AWS_KINESISANALYTICS_API Aws::String GetNameForInputStartingPosition(InputStartingPosition value);
} // namespace InputStartingPositionMapper
} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
