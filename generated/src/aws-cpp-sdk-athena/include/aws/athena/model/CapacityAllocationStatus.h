/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class CapacityAllocationStatus
  {
    NOT_SET,
    PENDING,
    SUCCEEDED,
    FAILED
  };

namespace CapacityAllocationStatusMapper
{
AWS_ATHENA_API CapacityAllocationStatus GetCapacityAllocationStatusForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForCapacityAllocationStatus(CapacityAllocationStatus value);
} // namespace CapacityAllocationStatusMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
