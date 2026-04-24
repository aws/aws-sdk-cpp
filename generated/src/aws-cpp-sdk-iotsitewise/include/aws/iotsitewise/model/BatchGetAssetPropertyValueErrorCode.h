/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class BatchGetAssetPropertyValueErrorCode { NOT_SET, ResourceNotFoundException, InvalidRequestException, AccessDeniedException };

namespace BatchGetAssetPropertyValueErrorCodeMapper {
AWS_IOTSITEWISE_API BatchGetAssetPropertyValueErrorCode GetBatchGetAssetPropertyValueErrorCodeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForBatchGetAssetPropertyValueErrorCode(BatchGetAssetPropertyValueErrorCode value);
}  // namespace BatchGetAssetPropertyValueErrorCodeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
