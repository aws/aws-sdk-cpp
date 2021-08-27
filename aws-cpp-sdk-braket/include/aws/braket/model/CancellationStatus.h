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
  enum class CancellationStatus
  {
    NOT_SET,
    CANCELLING,
    CANCELLED
  };

namespace CancellationStatusMapper
{
AWS_BRAKET_API CancellationStatus GetCancellationStatusForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForCancellationStatus(CancellationStatus value);
} // namespace CancellationStatusMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
