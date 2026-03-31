/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class EncryptionType { NOT_SET, AWS_OWNED_KEY, CUSTOMER_MANAGED_KEY };

namespace EncryptionTypeMapper {
AWS_CONNECTHEALTH_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForEncryptionType(EncryptionType value);
}  // namespace EncryptionTypeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
