﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/MainframeModernization_EXPORTS.h>

namespace Aws {
namespace MainframeModernization {
namespace Model {
enum class BatchJobExecutionStatus {
  NOT_SET,
  Submitting,
  Holding,
  Dispatching,
  Running,
  Cancelling,
  Cancelled,
  Succeeded,
  Failed,
  Purged,
  Succeeded_With_Warning
};

namespace BatchJobExecutionStatusMapper {
AWS_MAINFRAMEMODERNIZATION_API BatchJobExecutionStatus GetBatchJobExecutionStatusForName(const Aws::String& name);

AWS_MAINFRAMEMODERNIZATION_API Aws::String GetNameForBatchJobExecutionStatus(BatchJobExecutionStatus value);
}  // namespace BatchJobExecutionStatusMapper
}  // namespace Model
}  // namespace MainframeModernization
}  // namespace Aws
