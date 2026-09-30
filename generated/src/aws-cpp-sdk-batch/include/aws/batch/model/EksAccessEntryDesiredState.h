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
enum class EksAccessEntryDesiredState { NOT_SET, ENABLED, DISABLED, INHERIT_FROM_CLUSTER };

namespace EksAccessEntryDesiredStateMapper {
AWS_BATCH_API EksAccessEntryDesiredState GetEksAccessEntryDesiredStateForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForEksAccessEntryDesiredState(EksAccessEntryDesiredState value);
}  // namespace EksAccessEntryDesiredStateMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
