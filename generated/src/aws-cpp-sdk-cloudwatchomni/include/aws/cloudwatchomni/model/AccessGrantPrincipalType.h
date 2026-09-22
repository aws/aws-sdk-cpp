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
enum class AccessGrantPrincipalType { NOT_SET, IDC_USER, IDC_GROUP, IAM_USER, IAM_ROLE, IAM_ROOT, ACCESS_PROFILE, ALERT, AGENT };

namespace AccessGrantPrincipalTypeMapper {
AWS_CLOUDWATCHOMNI_API AccessGrantPrincipalType GetAccessGrantPrincipalTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForAccessGrantPrincipalType(AccessGrantPrincipalType value);
}  // namespace AccessGrantPrincipalTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
