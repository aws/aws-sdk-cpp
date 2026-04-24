/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>

namespace Aws {
namespace IdentityStore {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, KMS_INVALID_ARN, KMS_INVALID_KEY_USAGE, KMS_INVALID_STATE, KMS_DISABLED };

namespace ValidationExceptionReasonMapper {
AWS_IDENTITYSTORE_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_IDENTITYSTORE_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
