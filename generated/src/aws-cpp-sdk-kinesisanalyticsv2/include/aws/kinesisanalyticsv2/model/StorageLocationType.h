/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {
enum class StorageLocationType { NOT_SET, S3 };

namespace StorageLocationTypeMapper {
AWS_KINESISANALYTICSV2_API StorageLocationType GetStorageLocationTypeForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForStorageLocationType(StorageLocationType value);
}  // namespace StorageLocationTypeMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
