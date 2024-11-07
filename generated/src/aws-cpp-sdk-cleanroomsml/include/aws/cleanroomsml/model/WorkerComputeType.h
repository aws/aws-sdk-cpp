/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
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
AWS_CLEANROOMSML_API WorkerComputeType GetWorkerComputeTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForWorkerComputeType(WorkerComputeType value);
} // namespace WorkerComputeTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
