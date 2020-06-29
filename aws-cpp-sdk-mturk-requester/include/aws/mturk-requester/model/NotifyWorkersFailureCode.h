/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{
  enum class NotifyWorkersFailureCode
  {
    NOT_SET,
    SoftFailure,
    HardFailure
  };

namespace NotifyWorkersFailureCodeMapper
{
AWS_MTURK_API NotifyWorkersFailureCode GetNotifyWorkersFailureCodeForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForNotifyWorkersFailureCode(NotifyWorkersFailureCode value);
} // namespace NotifyWorkersFailureCodeMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
