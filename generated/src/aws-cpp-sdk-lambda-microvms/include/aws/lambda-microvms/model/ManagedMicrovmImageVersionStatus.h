/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
enum class ManagedMicrovmImageVersionStatus { NOT_SET, AVAILABLE, DEPRECATED };

namespace ManagedMicrovmImageVersionStatusMapper {
AWS_LAMBDAMICROVMS_API ManagedMicrovmImageVersionStatus GetManagedMicrovmImageVersionStatusForName(const Aws::String& name);

AWS_LAMBDAMICROVMS_API Aws::String GetNameForManagedMicrovmImageVersionStatus(ManagedMicrovmImageVersionStatus value);
}  // namespace ManagedMicrovmImageVersionStatusMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
