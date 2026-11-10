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
enum class TrafficSplitStatus { NOT_SET, InProgress, Completed, Failed };

namespace TrafficSplitStatusMapper {
AWS_ELASTICSEARCHSERVICE_API TrafficSplitStatus GetTrafficSplitStatusForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForTrafficSplitStatus(TrafficSplitStatus value);
}  // namespace TrafficSplitStatusMapper
}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
