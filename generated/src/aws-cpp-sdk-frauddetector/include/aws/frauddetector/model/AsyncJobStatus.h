/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{
  enum class AsyncJobStatus
  {
    NOT_SET,
    IN_PROGRESS_INITIALIZING,
    IN_PROGRESS,
    CANCEL_IN_PROGRESS,
    CANCELED,
    COMPLETE,
    FAILED
  };

namespace AsyncJobStatusMapper
{
AWS_FRAUDDETECTOR_API AsyncJobStatus GetAsyncJobStatusForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForAsyncJobStatus(AsyncJobStatus value);
} // namespace AsyncJobStatusMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
