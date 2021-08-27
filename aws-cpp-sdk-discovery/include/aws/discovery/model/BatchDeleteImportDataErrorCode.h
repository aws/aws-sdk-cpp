/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class BatchDeleteImportDataErrorCode
  {
    NOT_SET,
    NOT_FOUND,
    INTERNAL_SERVER_ERROR,
    OVER_LIMIT
  };

namespace BatchDeleteImportDataErrorCodeMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataErrorCode GetBatchDeleteImportDataErrorCodeForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForBatchDeleteImportDataErrorCode(BatchDeleteImportDataErrorCode value);
} // namespace BatchDeleteImportDataErrorCodeMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
