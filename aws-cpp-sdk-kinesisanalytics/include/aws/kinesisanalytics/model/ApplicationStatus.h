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
  enum class ApplicationStatus
  {
    NOT_SET,
    DELETING,
    STARTING,
    STOPPING,
    READY,
    RUNNING,
    UPDATING
  };

namespace ApplicationStatusMapper
{
AWS_KINESISANALYTICS_API ApplicationStatus GetApplicationStatusForName(const Aws::String& name);

AWS_KINESISANALYTICS_API Aws::String GetNameForApplicationStatus(ApplicationStatus value);
} // namespace ApplicationStatusMapper
} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
