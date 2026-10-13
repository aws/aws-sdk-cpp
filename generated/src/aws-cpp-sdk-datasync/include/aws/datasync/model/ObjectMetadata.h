/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>

namespace Aws {
namespace DataSync {
namespace Model {
enum class ObjectMetadata { NOT_SET, PRESERVE, NONE };

namespace ObjectMetadataMapper {
AWS_DATASYNC_API ObjectMetadata GetObjectMetadataForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForObjectMetadata(ObjectMetadata value);
}  // namespace ObjectMetadataMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
