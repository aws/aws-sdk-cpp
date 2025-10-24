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
enum class State { NOT_SET, Active, Deleted };

namespace StateMapper {
AWS_FORECASTSERVICE_API State GetStateForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForState(State value);
}  // namespace StateMapper
}  // namespace Model
}  // namespace ForecastService
}  // namespace Aws
