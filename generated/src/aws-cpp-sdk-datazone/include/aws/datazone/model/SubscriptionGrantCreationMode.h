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
enum class SubscriptionGrantCreationMode { NOT_SET, AUTOMATIC, MANUAL };

namespace SubscriptionGrantCreationModeMapper {
AWS_DATAZONE_API SubscriptionGrantCreationMode GetSubscriptionGrantCreationModeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForSubscriptionGrantCreationMode(SubscriptionGrantCreationMode value);
}  // namespace SubscriptionGrantCreationModeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
