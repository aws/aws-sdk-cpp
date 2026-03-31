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
enum class QuotaShareResourceSharingStrategy { NOT_SET, RESERVE, LEND, LEND_AND_BORROW };

namespace QuotaShareResourceSharingStrategyMapper {
AWS_BATCH_API QuotaShareResourceSharingStrategy GetQuotaShareResourceSharingStrategyForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForQuotaShareResourceSharingStrategy(QuotaShareResourceSharingStrategy value);
}  // namespace QuotaShareResourceSharingStrategyMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
