/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class DataSourceErrorType
  {
    NOT_SET,
    ACCESS_DENIED_EXCEPTION,
    CONFLICT_EXCEPTION,
    INTERNAL_SERVER_EXCEPTION,
    RESOURCE_NOT_FOUND_EXCEPTION,
    SERVICE_QUOTA_EXCEEDED_EXCEPTION,
    THROTTLING_EXCEPTION,
    VALIDATION_EXCEPTION
  };

namespace DataSourceErrorTypeMapper
{
AWS_DATAZONE_API DataSourceErrorType GetDataSourceErrorTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDataSourceErrorType(DataSourceErrorType value);
} // namespace DataSourceErrorTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
