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
  enum class ArrayJobDependency
  {
    NOT_SET,
    N_TO_N,
    SEQUENTIAL
  };

namespace ArrayJobDependencyMapper
{
AWS_BATCH_API ArrayJobDependency GetArrayJobDependencyForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForArrayJobDependency(ArrayJobDependency value);
} // namespace ArrayJobDependencyMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
