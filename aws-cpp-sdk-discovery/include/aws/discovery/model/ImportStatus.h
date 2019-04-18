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
  enum class ImportStatus
  {
    NOT_SET,
    IMPORT_IN_PROGRESS,
    IMPORT_COMPLETE,
    IMPORT_COMPLETE_WITH_ERRORS,
    IMPORT_FAILED,
    IMPORT_FAILED_SERVER_LIMIT_EXCEEDED,
    IMPORT_FAILED_RECORD_LIMIT_EXCEEDED,
    DELETE_IN_PROGRESS,
    DELETE_COMPLETE,
    DELETE_FAILED,
    DELETE_FAILED_LIMIT_EXCEEDED,
    INTERNAL_ERROR
  };

namespace ImportStatusMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API ImportStatus GetImportStatusForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForImportStatus(ImportStatus value);
} // namespace ImportStatusMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
