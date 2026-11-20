/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class FailedItemErrorCode { NOT_SET, MANAGED_API_NOT_FOUND, INTERNAL_ERROR };

namespace FailedItemErrorCodeMapper {
AWS_APIPORTAL_API FailedItemErrorCode GetFailedItemErrorCodeForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForFailedItemErrorCode(FailedItemErrorCode value);
}  // namespace FailedItemErrorCodeMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
