/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class CancelStepsRequestStatus
  {
    NOT_SET,
    SUBMITTED,
    FAILED
  };

namespace CancelStepsRequestStatusMapper
{
AWS_EMR_API CancelStepsRequestStatus GetCancelStepsRequestStatusForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForCancelStepsRequestStatus(CancelStepsRequestStatus value);
} // namespace CancelStepsRequestStatusMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
