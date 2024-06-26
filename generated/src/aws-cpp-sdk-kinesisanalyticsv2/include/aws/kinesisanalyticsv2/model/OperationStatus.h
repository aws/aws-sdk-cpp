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
  enum class OperationStatus
  {
    NOT_SET,
    IN_PROGRESS,
    CANCELLED,
    SUCCESSFUL,
    FAILED
  };

namespace OperationStatusMapper
{
AWS_KINESISANALYTICSV2_API OperationStatus GetOperationStatusForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForOperationStatus(OperationStatus value);
} // namespace OperationStatusMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
