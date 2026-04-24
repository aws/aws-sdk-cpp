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
enum class QuotaShareStatus { NOT_SET, CREATING, VALID, INVALID, UPDATING, DELETING };

namespace QuotaShareStatusMapper {
AWS_BATCH_API QuotaShareStatus GetQuotaShareStatusForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForQuotaShareStatus(QuotaShareStatus value);
}  // namespace QuotaShareStatusMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
