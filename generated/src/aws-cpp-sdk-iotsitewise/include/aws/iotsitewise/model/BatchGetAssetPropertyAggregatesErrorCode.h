/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class BatchGetAssetPropertyAggregatesErrorCode
  {
    NOT_SET,
    ResourceNotFoundException,
    InvalidRequestException,
    AccessDeniedException
  };

namespace BatchGetAssetPropertyAggregatesErrorCodeMapper
{
AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesErrorCode GetBatchGetAssetPropertyAggregatesErrorCodeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForBatchGetAssetPropertyAggregatesErrorCode(BatchGetAssetPropertyAggregatesErrorCode value);
} // namespace BatchGetAssetPropertyAggregatesErrorCodeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
