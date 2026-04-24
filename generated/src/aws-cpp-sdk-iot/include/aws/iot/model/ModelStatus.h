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
enum class ModelStatus { NOT_SET, PENDING_BUILD, ACTIVE, EXPIRED };

namespace ModelStatusMapper {
AWS_IOT_API ModelStatus GetModelStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForModelStatus(ModelStatus value);
}  // namespace ModelStatusMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
