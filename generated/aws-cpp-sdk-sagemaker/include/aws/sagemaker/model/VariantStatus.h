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
  enum class VariantStatus
  {
    NOT_SET,
    Creating,
    Updating,
    Deleting,
    ActivatingTraffic,
    Baking
  };

namespace VariantStatusMapper
{
AWS_SAGEMAKER_API VariantStatus GetVariantStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForVariantStatus(VariantStatus value);
} // namespace VariantStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
