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
  enum class ServiceJobRetryAction
  {
    NOT_SET,
    RETRY,
    EXIT
  };

namespace ServiceJobRetryActionMapper
{
AWS_BATCH_API ServiceJobRetryAction GetServiceJobRetryActionForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForServiceJobRetryAction(ServiceJobRetryAction value);
} // namespace ServiceJobRetryActionMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
