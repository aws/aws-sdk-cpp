/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class NotificationRole
  {
    NOT_SET,
    PROJECT_OWNER,
    PROJECT_CONTRIBUTOR,
    PROJECT_VIEWER,
    DOMAIN_OWNER,
    PROJECT_SUBSCRIBER
  };

namespace NotificationRoleMapper
{
AWS_DATAZONE_API NotificationRole GetNotificationRoleForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForNotificationRole(NotificationRole value);
} // namespace NotificationRoleMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
