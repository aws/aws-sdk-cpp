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
enum class ForwardValues { NOT_SET, none, allow_list, all };

namespace ForwardValuesMapper {
AWS_LIGHTSAIL_API ForwardValues GetForwardValuesForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForForwardValues(ForwardValues value);
}  // namespace ForwardValuesMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
