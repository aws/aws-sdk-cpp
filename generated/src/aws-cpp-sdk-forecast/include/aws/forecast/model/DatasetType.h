/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/ForecastService_EXPORTS.h>

namespace Aws {
namespace ForecastService {
namespace Model {
enum class DatasetType { NOT_SET, TARGET_TIME_SERIES, RELATED_TIME_SERIES, ITEM_METADATA };

namespace DatasetTypeMapper {
AWS_FORECASTSERVICE_API DatasetType GetDatasetTypeForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForDatasetType(DatasetType value);
}  // namespace DatasetTypeMapper
}  // namespace Model
}  // namespace ForecastService
}  // namespace Aws
