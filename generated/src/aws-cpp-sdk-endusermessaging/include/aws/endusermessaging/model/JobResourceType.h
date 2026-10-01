/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
namespace Model {
enum class JobResourceType { NOT_SET, REGISTRATION, BRAND_PROFILE };

namespace JobResourceTypeMapper {
AWS_ENDUSERMESSAGING_API JobResourceType GetJobResourceTypeForName(const Aws::String& name);

AWS_ENDUSERMESSAGING_API Aws::String GetNameForJobResourceType(JobResourceType value);
}  // namespace JobResourceTypeMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
