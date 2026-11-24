/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class WafStatus { NOT_SET, ENABLED, DISABLED };

namespace WafStatusMapper {
AWS_APIPORTAL_API WafStatus GetWafStatusForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForWafStatus(WafStatus value);
}  // namespace WafStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
