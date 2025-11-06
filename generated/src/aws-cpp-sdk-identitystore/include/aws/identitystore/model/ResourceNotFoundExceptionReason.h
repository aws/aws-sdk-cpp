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
enum class ResourceNotFoundExceptionReason { NOT_SET, KMS_KEY_NOT_FOUND };

namespace ResourceNotFoundExceptionReasonMapper {
AWS_IDENTITYSTORE_API ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name);

AWS_IDENTITYSTORE_API Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason value);
}  // namespace ResourceNotFoundExceptionReasonMapper
}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
