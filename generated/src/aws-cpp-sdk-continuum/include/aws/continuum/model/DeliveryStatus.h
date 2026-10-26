/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class DeliveryStatus { NOT_SET, PENDING, SUCCEEDED, FAILED, SKIPPED, ABANDONED };

namespace DeliveryStatusMapper {
AWS_CONTINUUM_API DeliveryStatus GetDeliveryStatusForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForDeliveryStatus(DeliveryStatus value);
}  // namespace DeliveryStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
