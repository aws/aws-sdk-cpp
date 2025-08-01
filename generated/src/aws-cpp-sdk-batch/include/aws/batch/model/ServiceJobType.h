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
  enum class ServiceJobType
  {
    NOT_SET,
    SAGEMAKER_TRAINING
  };

namespace ServiceJobTypeMapper
{
AWS_BATCH_API ServiceJobType GetServiceJobTypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForServiceJobType(ServiceJobType value);
} // namespace ServiceJobTypeMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
