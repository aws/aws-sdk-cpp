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
enum class Chipset { NOT_SET, GRAVITON };

namespace ChipsetMapper {
AWS_LAMBDAMICROVMS_API Chipset GetChipsetForName(const Aws::String& name);

AWS_LAMBDAMICROVMS_API Aws::String GetNameForChipset(Chipset value);
}  // namespace ChipsetMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
