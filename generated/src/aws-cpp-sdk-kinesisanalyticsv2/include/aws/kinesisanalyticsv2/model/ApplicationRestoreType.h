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
  enum class ApplicationRestoreType
  {
    NOT_SET,
    SKIP_RESTORE_FROM_SNAPSHOT,
    RESTORE_FROM_LATEST_SNAPSHOT,
    RESTORE_FROM_CUSTOM_SNAPSHOT
  };

namespace ApplicationRestoreTypeMapper
{
AWS_KINESISANALYTICSV2_API ApplicationRestoreType GetApplicationRestoreTypeForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForApplicationRestoreType(ApplicationRestoreType value);
} // namespace ApplicationRestoreTypeMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
