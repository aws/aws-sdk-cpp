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
enum class ExperimentRunStatus { NOT_SET, RUNNING, DONE };

namespace ExperimentRunStatusMapper {
AWS_APPCONFIG_API ExperimentRunStatus GetExperimentRunStatusForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForExperimentRunStatus(ExperimentRunStatus value);
}  // namespace ExperimentRunStatusMapper
}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
