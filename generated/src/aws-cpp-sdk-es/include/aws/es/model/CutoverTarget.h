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
enum class CutoverTarget { NOT_SET, ClonedCluster, PrimaryCluster };

namespace CutoverTargetMapper {
AWS_ELASTICSEARCHSERVICE_API CutoverTarget GetCutoverTargetForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForCutoverTarget(CutoverTarget value);
}  // namespace CutoverTargetMapper
}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
