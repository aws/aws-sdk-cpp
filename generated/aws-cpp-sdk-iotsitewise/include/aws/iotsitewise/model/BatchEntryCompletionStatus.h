/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class BatchEntryCompletionStatus
  {
    NOT_SET,
    SUCCESS,
    ERROR_
  };

namespace BatchEntryCompletionStatusMapper
{
AWS_IOTSITEWISE_API BatchEntryCompletionStatus GetBatchEntryCompletionStatusForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForBatchEntryCompletionStatus(BatchEntryCompletionStatus value);
} // namespace BatchEntryCompletionStatusMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
