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
enum class AccessGrantType { NOT_SET, SERVICE_MANAGED, CUSTOMER_MANAGED };

namespace AccessGrantTypeMapper {
AWS_CLOUDWATCHOMNI_API AccessGrantType GetAccessGrantTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForAccessGrantType(AccessGrantType value);
}  // namespace AccessGrantTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
