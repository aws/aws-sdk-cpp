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
enum class DataSourceRunType { NOT_SET, PRIORITIZED, SCHEDULED };

namespace DataSourceRunTypeMapper {
AWS_DATAZONE_API DataSourceRunType GetDataSourceRunTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDataSourceRunType(DataSourceRunType value);
}  // namespace DataSourceRunTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
