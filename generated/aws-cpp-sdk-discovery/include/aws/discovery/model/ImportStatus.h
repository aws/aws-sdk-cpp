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
