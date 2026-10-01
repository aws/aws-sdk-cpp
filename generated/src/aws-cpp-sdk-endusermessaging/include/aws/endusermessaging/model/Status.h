/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
namespace Model {
enum class Status { NOT_SET, ACTIVE, BLOCKED, PAUSED, CANCELLED, FAILED };

namespace StatusMapper {
AWS_ENDUSERMESSAGING_API Status GetStatusForName(const Aws::String& name);

AWS_ENDUSERMESSAGING_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
