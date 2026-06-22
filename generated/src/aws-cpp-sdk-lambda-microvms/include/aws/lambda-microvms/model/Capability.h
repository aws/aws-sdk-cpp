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
enum class Capability { NOT_SET, ALL };

namespace CapabilityMapper {
AWS_LAMBDAMICROVMS_API Capability GetCapabilityForName(const Aws::String& name);

AWS_LAMBDAMICROVMS_API Aws::String GetNameForCapability(Capability value);
}  // namespace CapabilityMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
