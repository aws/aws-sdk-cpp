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
enum class OrganizationGrantPermission { NOT_SET, ADMIN };

namespace OrganizationGrantPermissionMapper {
AWS_CLOUDWATCHOMNI_API OrganizationGrantPermission GetOrganizationGrantPermissionForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForOrganizationGrantPermission(OrganizationGrantPermission value);
}  // namespace OrganizationGrantPermissionMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
