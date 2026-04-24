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
enum class StorageCompressionFormat { NOT_SET, NONE, GZIP };

namespace StorageCompressionFormatMapper {
AWS_IOTFLEETWISE_API StorageCompressionFormat GetStorageCompressionFormatForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForStorageCompressionFormat(StorageCompressionFormat value);
}  // namespace StorageCompressionFormatMapper
}  // namespace Model
}  // namespace IoTFleetWise
}  // namespace Aws
