/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class LastUpdateStatusValue
  {
    NOT_SET,
    Successful,
    Failed,
    InProgress
  };

namespace LastUpdateStatusValueMapper
{
AWS_SAGEMAKER_API LastUpdateStatusValue GetLastUpdateStatusValueForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForLastUpdateStatusValue(LastUpdateStatusValue value);
} // namespace LastUpdateStatusValueMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
