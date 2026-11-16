/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/KMS_EXPORTS.h>

namespace Aws {
namespace KMS {
namespace Model {
enum class ResourceOwnerType { NOT_SET, SELF, OTHER_ACCOUNTS_VIA_RAM };

namespace ResourceOwnerTypeMapper {
AWS_KMS_API ResourceOwnerType GetResourceOwnerTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForResourceOwnerType(ResourceOwnerType value);
}  // namespace ResourceOwnerTypeMapper
}  // namespace Model
}  // namespace KMS
}  // namespace Aws
