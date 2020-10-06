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
  enum class ApplicationStatus
  {
    NOT_SET,
    DELETING,
    STARTING,
    STOPPING,
    READY,
    RUNNING,
    UPDATING,
    AUTOSCALING,
    FORCE_STOPPING
  };

namespace ApplicationStatusMapper
{
AWS_KINESISANALYTICSV2_API ApplicationStatus GetApplicationStatusForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForApplicationStatus(ApplicationStatus value);
} // namespace ApplicationStatusMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
