/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class PropertyNotificationState { NOT_SET, ENABLED, DISABLED };

namespace PropertyNotificationStateMapper {
AWS_IOTSITEWISE_API PropertyNotificationState GetPropertyNotificationStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForPropertyNotificationState(PropertyNotificationState value);
}  // namespace PropertyNotificationStateMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
