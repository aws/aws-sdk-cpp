/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/Health_EXPORTS.h>

namespace Aws {
namespace Health {
namespace Model {
enum class OrganizationTagType { NOT_SET, ORGANIZATION_RESOURCE_TAG, ORGANIZATION_ACCOUNT_TAG };

namespace OrganizationTagTypeMapper {
AWS_HEALTH_API OrganizationTagType GetOrganizationTagTypeForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForOrganizationTagType(OrganizationTagType value);
}  // namespace OrganizationTagTypeMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
