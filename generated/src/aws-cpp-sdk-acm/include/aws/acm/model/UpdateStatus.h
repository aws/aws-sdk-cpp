/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class UpdateStatus { NOT_SET, PENDING_DOMAIN_VALIDATION, SUCCESS, FAILED };

namespace UpdateStatusMapper {
AWS_ACM_API UpdateStatus GetUpdateStatusForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForUpdateStatus(UpdateStatus value);
}  // namespace UpdateStatusMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
