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
enum class AzureBlobType { NOT_SET, BLOCK };

namespace AzureBlobTypeMapper {
AWS_DATASYNC_API AzureBlobType GetAzureBlobTypeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForAzureBlobType(AzureBlobType value);
}  // namespace AzureBlobTypeMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
