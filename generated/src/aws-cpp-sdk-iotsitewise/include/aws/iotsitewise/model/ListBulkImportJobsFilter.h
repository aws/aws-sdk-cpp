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
  enum class ListBulkImportJobsFilter
  {
    NOT_SET,
    ALL,
    PENDING,
    RUNNING,
    CANCELLED,
    FAILED,
    COMPLETED_WITH_FAILURES,
    COMPLETED
  };

namespace ListBulkImportJobsFilterMapper
{
AWS_IOTSITEWISE_API ListBulkImportJobsFilter GetListBulkImportJobsFilterForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForListBulkImportJobsFilter(ListBulkImportJobsFilter value);
} // namespace ListBulkImportJobsFilterMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
