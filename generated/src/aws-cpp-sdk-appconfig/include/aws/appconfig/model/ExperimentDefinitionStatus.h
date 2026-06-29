/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppConfig {
namespace Model {
enum class ExperimentDefinitionStatus { NOT_SET, ACTIVE, IDLE, ARCHIVED };

namespace ExperimentDefinitionStatusMapper {
AWS_APPCONFIG_API ExperimentDefinitionStatus GetExperimentDefinitionStatusForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForExperimentDefinitionStatus(ExperimentDefinitionStatus value);
}  // namespace ExperimentDefinitionStatusMapper
}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
