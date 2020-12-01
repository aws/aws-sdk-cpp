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
  enum class OfflineStoreStatusValue
  {
    NOT_SET,
    Active,
    Blocked,
    Disabled
  };

namespace OfflineStoreStatusValueMapper
{
AWS_SAGEMAKER_API OfflineStoreStatusValue GetOfflineStoreStatusValueForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForOfflineStoreStatusValue(OfflineStoreStatusValue value);
} // namespace OfflineStoreStatusValueMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
