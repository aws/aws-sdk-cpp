/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class AwsJobAbortCriteriaAbortAction
  {
    NOT_SET,
    CANCEL
  };

namespace AwsJobAbortCriteriaAbortActionMapper
{
AWS_IOT_API AwsJobAbortCriteriaAbortAction GetAwsJobAbortCriteriaAbortActionForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAwsJobAbortCriteriaAbortAction(AwsJobAbortCriteriaAbortAction value);
} // namespace AwsJobAbortCriteriaAbortActionMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
