/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class DataSourceRunStatus { NOT_SET, REQUESTED, RUNNING, FAILED, PARTIALLY_SUCCEEDED, SUCCESS };

namespace DataSourceRunStatusMapper {
AWS_DATAZONE_API DataSourceRunStatus GetDataSourceRunStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDataSourceRunStatus(DataSourceRunStatus value);
}  // namespace DataSourceRunStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
