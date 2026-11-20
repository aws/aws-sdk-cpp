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
enum class TryItState { NOT_SET, ENABLED, DISABLED };

namespace TryItStateMapper {
AWS_APIPORTAL_API TryItState GetTryItStateForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForTryItState(TryItState value);
}  // namespace TryItStateMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
