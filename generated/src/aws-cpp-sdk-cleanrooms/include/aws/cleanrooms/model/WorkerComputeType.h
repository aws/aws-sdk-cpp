/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class WorkerComputeType
  {
    NOT_SET,
    CR_1X,
    CR_4X
  };

namespace WorkerComputeTypeMapper
{
AWS_CLEANROOMS_API WorkerComputeType GetWorkerComputeTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForWorkerComputeType(WorkerComputeType value);
} // namespace WorkerComputeTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
