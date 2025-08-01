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
  enum class ServiceResourceIdName
  {
    NOT_SET,
    TrainingJobArn
  };

namespace ServiceResourceIdNameMapper
{
AWS_BATCH_API ServiceResourceIdName GetServiceResourceIdNameForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForServiceResourceIdName(ServiceResourceIdName value);
} // namespace ServiceResourceIdNameMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
