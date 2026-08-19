/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Batch {
namespace Model {
enum class ContainerInsights { NOT_SET, ENABLED, ENHANCED, DISABLED };

namespace ContainerInsightsMapper {
AWS_BATCH_API ContainerInsights GetContainerInsightsForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForContainerInsights(ContainerInsights value);
}  // namespace ContainerInsightsMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
