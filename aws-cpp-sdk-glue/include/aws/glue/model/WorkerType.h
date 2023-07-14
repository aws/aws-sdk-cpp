/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class WorkerType
  {
    NOT_SET,
    Standard,
    G_1X,
    G_2X
  };

namespace WorkerTypeMapper
{
AWS_GLUE_API WorkerType GetWorkerTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForWorkerType(WorkerType value);
} // namespace WorkerTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
