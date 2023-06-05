/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class OrganizationStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    DISABLED_PERMANENTLY
  };

namespace OrganizationStatusMapper
{
AWS_CLOUDFORMATION_API OrganizationStatus GetOrganizationStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForOrganizationStatus(OrganizationStatus value);
} // namespace OrganizationStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
