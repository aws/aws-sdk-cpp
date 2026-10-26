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
enum class IssuePatchDeliveryStatus { NOT_SET, PENDING, SUCCEEDED, FAILED, SKIPPED };

namespace IssuePatchDeliveryStatusMapper {
AWS_CONTINUUM_API IssuePatchDeliveryStatus GetIssuePatchDeliveryStatusForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForIssuePatchDeliveryStatus(IssuePatchDeliveryStatus value);
}  // namespace IssuePatchDeliveryStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
