/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Braket
{
namespace Model
{
  enum class QuantumTaskStatus
  {
    NOT_SET,
    CREATED,
    QUEUED,
    RUNNING,
    COMPLETED,
    FAILED,
    CANCELLING,
    CANCELLED
  };

namespace QuantumTaskStatusMapper
{
AWS_BRAKET_API QuantumTaskStatus GetQuantumTaskStatusForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForQuantumTaskStatus(QuantumTaskStatus value);
} // namespace QuantumTaskStatusMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
