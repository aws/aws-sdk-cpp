/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class OperationStatus { NOT_SET, NotStarted, Started, Failed, Completed, Succeeded };

namespace OperationStatusMapper {
AWS_LIGHTSAIL_API OperationStatus GetOperationStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForOperationStatus(OperationStatus value);
}  // namespace OperationStatusMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
