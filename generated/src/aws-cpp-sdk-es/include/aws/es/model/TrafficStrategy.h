/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>

namespace Aws {
namespace ElasticsearchService {
namespace Model {
enum class TrafficStrategy { NOT_SET, ShiftReadTrafficPercent };

namespace TrafficStrategyMapper {
AWS_ELASTICSEARCHSERVICE_API TrafficStrategy GetTrafficStrategyForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForTrafficStrategy(TrafficStrategy value);
}  // namespace TrafficStrategyMapper
}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
