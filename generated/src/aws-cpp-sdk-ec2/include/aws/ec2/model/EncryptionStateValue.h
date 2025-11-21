/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class EncryptionStateValue { NOT_SET, enabling, enabled, disabling, disabled };

namespace EncryptionStateValueMapper {
AWS_EC2_API EncryptionStateValue GetEncryptionStateValueForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForEncryptionStateValue(EncryptionStateValue value);
}  // namespace EncryptionStateValueMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
