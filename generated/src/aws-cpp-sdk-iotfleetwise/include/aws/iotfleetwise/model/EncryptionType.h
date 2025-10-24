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
enum class EncryptionType { NOT_SET, KMS_BASED_ENCRYPTION, FLEETWISE_DEFAULT_ENCRYPTION };

namespace EncryptionTypeMapper {
AWS_IOTFLEETWISE_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForEncryptionType(EncryptionType value);
}  // namespace EncryptionTypeMapper
}  // namespace Model
}  // namespace IoTFleetWise
}  // namespace Aws
