/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

namespace Aws {
namespace Kinesis {
namespace Model {
enum class ChannelEncryptionType { NOT_SET, KMS };

namespace ChannelEncryptionTypeMapper {
AWS_KINESIS_API ChannelEncryptionType GetChannelEncryptionTypeForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForChannelEncryptionType(ChannelEncryptionType value);
}  // namespace ChannelEncryptionTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
