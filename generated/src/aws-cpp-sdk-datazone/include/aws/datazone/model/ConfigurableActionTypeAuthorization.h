/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class ConfigurableActionTypeAuthorization { NOT_SET, IAM, HTTPS };

namespace ConfigurableActionTypeAuthorizationMapper {
AWS_DATAZONE_API ConfigurableActionTypeAuthorization GetConfigurableActionTypeAuthorizationForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForConfigurableActionTypeAuthorization(ConfigurableActionTypeAuthorization value);
}  // namespace ConfigurableActionTypeAuthorizationMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
