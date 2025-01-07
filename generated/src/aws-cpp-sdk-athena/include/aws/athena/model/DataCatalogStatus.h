/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class DataCatalogStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_COMPLETE,
    CREATE_FAILED,
    CREATE_FAILED_CLEANUP_IN_PROGRESS,
    CREATE_FAILED_CLEANUP_COMPLETE,
    CREATE_FAILED_CLEANUP_FAILED,
    DELETE_IN_PROGRESS,
    DELETE_COMPLETE,
    DELETE_FAILED
  };

namespace DataCatalogStatusMapper
{
AWS_ATHENA_API DataCatalogStatus GetDataCatalogStatusForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForDataCatalogStatus(DataCatalogStatus value);
} // namespace DataCatalogStatusMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
