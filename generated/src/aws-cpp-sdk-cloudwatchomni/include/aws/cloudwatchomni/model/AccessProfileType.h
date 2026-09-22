/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class AccessProfileType { NOT_SET, SERVICE_MANAGED, CUSTOMER_MANAGED };

namespace AccessProfileTypeMapper {
AWS_CLOUDWATCHOMNI_API AccessProfileType GetAccessProfileTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForAccessProfileType(AccessProfileType value);
}  // namespace AccessProfileTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
