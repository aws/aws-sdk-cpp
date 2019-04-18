/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
