/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

namespace Aws {
namespace imagebuilder {
namespace Model {
enum class LifecyclePolicyStatus { NOT_SET, DISABLED, ENABLED };

namespace LifecyclePolicyStatusMapper {
AWS_IMAGEBUILDER_API LifecyclePolicyStatus GetLifecyclePolicyStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForLifecyclePolicyStatus(LifecyclePolicyStatus value);
}  // namespace LifecyclePolicyStatusMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
