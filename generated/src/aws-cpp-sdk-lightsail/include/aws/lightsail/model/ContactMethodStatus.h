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
enum class ContactMethodStatus { NOT_SET, PendingVerification, Valid, Invalid };

namespace ContactMethodStatusMapper {
AWS_LIGHTSAIL_API ContactMethodStatus GetContactMethodStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForContactMethodStatus(ContactMethodStatus value);
}  // namespace ContactMethodStatusMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
