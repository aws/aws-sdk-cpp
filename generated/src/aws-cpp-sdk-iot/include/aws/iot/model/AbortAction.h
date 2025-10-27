/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class AbortAction { NOT_SET, CANCEL };

namespace AbortActionMapper {
AWS_IOT_API AbortAction GetAbortActionForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAbortAction(AbortAction value);
}  // namespace AbortActionMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
