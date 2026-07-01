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
enum class Behavior { NOT_SET, Enable, Disable };

namespace BehaviorMapper {
AWS_CONNECT_API Behavior GetBehaviorForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForBehavior(Behavior value);
}  // namespace BehaviorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
