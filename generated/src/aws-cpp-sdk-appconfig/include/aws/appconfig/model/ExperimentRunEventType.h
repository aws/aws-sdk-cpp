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
enum class ExperimentRunEventType { NOT_SET, RUN_STARTED, EXPOSURE_UPDATED, OVERRIDES_UPDATED, RUN_STOPPED };

namespace ExperimentRunEventTypeMapper {
AWS_APPCONFIG_API ExperimentRunEventType GetExperimentRunEventTypeForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForExperimentRunEventType(ExperimentRunEventType value);
}  // namespace ExperimentRunEventTypeMapper
}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
