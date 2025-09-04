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
  enum class ProtectedJobWorkerComputeType
  {
    NOT_SET,
    CR_1X,
    CR_4X
  };

namespace ProtectedJobWorkerComputeTypeMapper
{
AWS_CLEANROOMS_API ProtectedJobWorkerComputeType GetProtectedJobWorkerComputeTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForProtectedJobWorkerComputeType(ProtectedJobWorkerComputeType value);
} // namespace ProtectedJobWorkerComputeTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
