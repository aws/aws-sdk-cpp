/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class CustomStepStatus
  {
    NOT_SET,
    SUCCESS,
    FAILURE
  };

namespace CustomStepStatusMapper
{
AWS_TRANSFER_API CustomStepStatus GetCustomStepStatusForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForCustomStepStatus(CustomStepStatus value);
} // namespace CustomStepStatusMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
