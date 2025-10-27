/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/Firehose_EXPORTS.h>

namespace Aws {
namespace Firehose {
namespace Model {
enum class DeliveryStreamEncryptionStatus { NOT_SET, ENABLED, ENABLING, ENABLING_FAILED, DISABLED, DISABLING, DISABLING_FAILED };

namespace DeliveryStreamEncryptionStatusMapper {
AWS_FIREHOSE_API DeliveryStreamEncryptionStatus GetDeliveryStreamEncryptionStatusForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForDeliveryStreamEncryptionStatus(DeliveryStreamEncryptionStatus value);
}  // namespace DeliveryStreamEncryptionStatusMapper
}  // namespace Model
}  // namespace Firehose
}  // namespace Aws
