/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class MaskMode { NOT_SET, PII, EntityType };

namespace MaskModeMapper {
AWS_CONNECT_API MaskMode GetMaskModeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMaskMode(MaskMode value);
}  // namespace MaskModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
