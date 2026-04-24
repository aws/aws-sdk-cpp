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
enum class DataSourceStatus { NOT_SET, CREATING, FAILED_CREATION, READY, UPDATING, FAILED_UPDATE, RUNNING, DELETING, FAILED_DELETION };

namespace DataSourceStatusMapper {
AWS_DATAZONE_API DataSourceStatus GetDataSourceStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDataSourceStatus(DataSourceStatus value);
}  // namespace DataSourceStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
