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
enum class AttributeType { NOT_SET, string, integer, float_, timestamp, geolocation };

namespace AttributeTypeMapper {
AWS_FORECASTSERVICE_API AttributeType GetAttributeTypeForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForAttributeType(AttributeType value);
}  // namespace AttributeTypeMapper
}  // namespace Model
}  // namespace ForecastService
}  // namespace Aws
