/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/Finspace_EXPORTS.h>

namespace Aws {
namespace finspace {
namespace Model {
enum class ChangesetStatus { NOT_SET, PENDING, PROCESSING, FAILED, COMPLETED };

namespace ChangesetStatusMapper {
AWS_FINSPACE_API ChangesetStatus GetChangesetStatusForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForChangesetStatus(ChangesetStatus value);
}  // namespace ChangesetStatusMapper
}  // namespace Model
}  // namespace finspace
}  // namespace Aws
