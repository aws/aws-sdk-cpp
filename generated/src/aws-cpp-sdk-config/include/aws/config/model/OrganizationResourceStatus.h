/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class OrganizationResourceStatus
  {
    NOT_SET,
    CREATE_SUCCESSFUL,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    DELETE_SUCCESSFUL,
    DELETE_FAILED,
    DELETE_IN_PROGRESS,
    UPDATE_SUCCESSFUL,
    UPDATE_IN_PROGRESS,
    UPDATE_FAILED
  };

namespace OrganizationResourceStatusMapper
{
AWS_CONFIGSERVICE_API OrganizationResourceStatus GetOrganizationResourceStatusForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForOrganizationResourceStatus(OrganizationResourceStatus value);
} // namespace OrganizationResourceStatusMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
