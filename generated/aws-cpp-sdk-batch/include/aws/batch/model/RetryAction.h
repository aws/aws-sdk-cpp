/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class RetryAction
  {
    NOT_SET,
    RETRY,
    EXIT
  };

namespace RetryActionMapper
{
AWS_BATCH_API RetryAction GetRetryActionForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForRetryAction(RetryAction value);
} // namespace RetryActionMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
