/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

namespace Aws {
namespace IoTFleetWise {
namespace Model {
enum class EncryptionStatus { NOT_SET, PENDING, SUCCESS, FAILURE };

namespace EncryptionStatusMapper {
AWS_IOTFLEETWISE_API EncryptionStatus GetEncryptionStatusForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForEncryptionStatus(EncryptionStatus value);
}  // namespace EncryptionStatusMapper
}  // namespace Model
}  // namespace IoTFleetWise
}  // namespace Aws
