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
enum class OrganizationGrantPrincipalType { NOT_SET, IDC_USER, IDC_GROUP, IAM_USER, IAM_ROLE, IAM_ROOT };

namespace OrganizationGrantPrincipalTypeMapper {
AWS_CLOUDWATCHOMNI_API OrganizationGrantPrincipalType GetOrganizationGrantPrincipalTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForOrganizationGrantPrincipalType(OrganizationGrantPrincipalType value);
}  // namespace OrganizationGrantPrincipalTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
