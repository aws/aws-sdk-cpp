/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class ServiceEnvironmentType
  {
    NOT_SET,
    SAGEMAKER_TRAINING
  };

namespace ServiceEnvironmentTypeMapper
{
AWS_BATCH_API ServiceEnvironmentType GetServiceEnvironmentTypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForServiceEnvironmentType(ServiceEnvironmentType value);
} // namespace ServiceEnvironmentTypeMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
