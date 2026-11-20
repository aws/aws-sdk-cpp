/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class AssetOwnershipTransferStatus { NOT_SET, IN_PROGRESS, SUCCEEDED, FAILED };

namespace AssetOwnershipTransferStatusMapper {
AWS_DATAZONE_API AssetOwnershipTransferStatus GetAssetOwnershipTransferStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForAssetOwnershipTransferStatus(AssetOwnershipTransferStatus value);
}  // namespace AssetOwnershipTransferStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
