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
enum class DryRunModifierType { NOT_SET, IGNORE_CIPHERTEXT };

namespace DryRunModifierTypeMapper {
AWS_KMS_API DryRunModifierType GetDryRunModifierTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForDryRunModifierType(DryRunModifierType value);
}  // namespace DryRunModifierTypeMapper
}  // namespace Model
}  // namespace KMS
}  // namespace Aws
