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
enum class Visibility { NOT_SET, ALL, ASSIGNED, NONE };

namespace VisibilityMapper {
AWS_CONNECT_API Visibility GetVisibilityForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForVisibility(Visibility value);
}  // namespace VisibilityMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
