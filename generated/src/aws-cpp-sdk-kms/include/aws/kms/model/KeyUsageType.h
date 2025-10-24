﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/KMS_EXPORTS.h>

namespace Aws {
namespace KMS {
namespace Model {
enum class KeyUsageType { NOT_SET, SIGN_VERIFY, ENCRYPT_DECRYPT, GENERATE_VERIFY_MAC, KEY_AGREEMENT };

namespace KeyUsageTypeMapper {
AWS_KMS_API KeyUsageType GetKeyUsageTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForKeyUsageType(KeyUsageType value);
}  // namespace KeyUsageTypeMapper
}  // namespace Model
}  // namespace KMS
}  // namespace Aws
