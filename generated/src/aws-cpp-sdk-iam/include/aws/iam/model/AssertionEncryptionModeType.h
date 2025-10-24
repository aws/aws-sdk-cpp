/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Model {
enum class AssertionEncryptionModeType { NOT_SET, Required, Allowed };

namespace AssertionEncryptionModeTypeMapper {
AWS_IAM_API AssertionEncryptionModeType GetAssertionEncryptionModeTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForAssertionEncryptionModeType(AssertionEncryptionModeType value);
}  // namespace AssertionEncryptionModeTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
