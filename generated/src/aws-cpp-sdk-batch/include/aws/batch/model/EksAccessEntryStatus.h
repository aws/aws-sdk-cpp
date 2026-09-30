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
enum class EksAccessEntryStatus { NOT_SET, ACTIVE, INACTIVE };

namespace EksAccessEntryStatusMapper {
AWS_BATCH_API EksAccessEntryStatus GetEksAccessEntryStatusForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForEksAccessEntryStatus(EksAccessEntryStatus value);
}  // namespace EksAccessEntryStatusMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
