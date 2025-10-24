﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/Macie2_EXPORTS.h>

namespace Aws {
namespace Macie2 {
namespace Model {
enum class EncryptionType { NOT_SET, NONE, AES256, aws_kms, UNKNOWN, aws_kms_dsse };

namespace EncryptionTypeMapper {
AWS_MACIE2_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForEncryptionType(EncryptionType value);
}  // namespace EncryptionTypeMapper
}  // namespace Model
}  // namespace Macie2
}  // namespace Aws
