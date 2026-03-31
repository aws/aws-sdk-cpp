/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class NewRelicRegion { NOT_SET, US, EU };

namespace NewRelicRegionMapper {
AWS_DEVOPSAGENT_API NewRelicRegion GetNewRelicRegionForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForNewRelicRegion(NewRelicRegion value);
}  // namespace NewRelicRegionMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
