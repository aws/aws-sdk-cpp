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
  enum class CapacityReservationStatus
  {
    NOT_SET,
    PENDING,
    ACTIVE,
    CANCELLING,
    CANCELLED,
    FAILED,
    UPDATE_PENDING
  };

namespace CapacityReservationStatusMapper
{
AWS_ATHENA_API CapacityReservationStatus GetCapacityReservationStatusForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForCapacityReservationStatus(CapacityReservationStatus value);
} // namespace CapacityReservationStatusMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
