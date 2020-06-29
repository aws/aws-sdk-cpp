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
  enum class AppType
  {
    NOT_SET,
    JupyterServer,
    KernelGateway,
    TensorBoard
  };

namespace AppTypeMapper
{
AWS_SAGEMAKER_API AppType GetAppTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAppType(AppType value);
} // namespace AppTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
