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
  enum class ModelCacheSetting
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace ModelCacheSettingMapper
{
AWS_SAGEMAKER_API ModelCacheSetting GetModelCacheSettingForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelCacheSetting(ModelCacheSetting value);
} // namespace ModelCacheSettingMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
