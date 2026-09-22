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
enum class OrganizationCredentialType { NOT_SET, SPACE_OPERATION };

namespace OrganizationCredentialTypeMapper {
AWS_CLOUDWATCHOMNI_API OrganizationCredentialType GetOrganizationCredentialTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForOrganizationCredentialType(OrganizationCredentialType value);
}  // namespace OrganizationCredentialTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
