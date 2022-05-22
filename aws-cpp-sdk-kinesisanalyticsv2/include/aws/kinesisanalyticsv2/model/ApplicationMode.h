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
  enum class ApplicationMode
  {
    NOT_SET,
    STREAMING,
    INTERACTIVE
  };

namespace ApplicationModeMapper
{
AWS_KINESISANALYTICSV2_API ApplicationMode GetApplicationModeForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForApplicationMode(ApplicationMode value);
} // namespace ApplicationModeMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
