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
enum class Policy { NOT_SET, None, RedactedOnly, RedactedAndOriginal };

namespace PolicyMapper {
AWS_CONNECT_API Policy GetPolicyForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForPolicy(Policy value);
}  // namespace PolicyMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
