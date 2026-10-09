/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace deadline {
namespace Model {
enum class MembershipResourceType { NOT_SET, FARM, QUEUE, FLEET, JOB };

namespace MembershipResourceTypeMapper {
AWS_DEADLINE_API MembershipResourceType GetMembershipResourceTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForMembershipResourceType(MembershipResourceType value);
}  // namespace MembershipResourceTypeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
