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
  enum class ImportTaskFilterName
  {
    NOT_SET,
    IMPORT_TASK_ID,
    STATUS,
    NAME
  };

namespace ImportTaskFilterNameMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API ImportTaskFilterName GetImportTaskFilterNameForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForImportTaskFilterName(ImportTaskFilterName value);
} // namespace ImportTaskFilterNameMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
