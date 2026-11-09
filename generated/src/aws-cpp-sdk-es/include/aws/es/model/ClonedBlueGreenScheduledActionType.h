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
enum class ClonedBlueGreenScheduledActionType { NOT_SET, AutomaticCutoverToPrimaryCluster, DeletePrimaryCluster };

namespace ClonedBlueGreenScheduledActionTypeMapper {
AWS_ELASTICSEARCHSERVICE_API ClonedBlueGreenScheduledActionType GetClonedBlueGreenScheduledActionTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForClonedBlueGreenScheduledActionType(ClonedBlueGreenScheduledActionType value);
}  // namespace ClonedBlueGreenScheduledActionTypeMapper
}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
