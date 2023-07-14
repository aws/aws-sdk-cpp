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
  enum class HumanTaskUiStatus
  {
    NOT_SET,
    Active,
    Deleting
  };

namespace HumanTaskUiStatusMapper
{
AWS_SAGEMAKER_API HumanTaskUiStatus GetHumanTaskUiStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHumanTaskUiStatus(HumanTaskUiStatus value);
} // namespace HumanTaskUiStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
