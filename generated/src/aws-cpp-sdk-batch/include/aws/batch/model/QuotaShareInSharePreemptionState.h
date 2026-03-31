/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Batch {
namespace Model {
enum class QuotaShareInSharePreemptionState { NOT_SET, ENABLED, DISABLED };

namespace QuotaShareInSharePreemptionStateMapper {
AWS_BATCH_API QuotaShareInSharePreemptionState GetQuotaShareInSharePreemptionStateForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForQuotaShareInSharePreemptionState(QuotaShareInSharePreemptionState value);
}  // namespace QuotaShareInSharePreemptionStateMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
