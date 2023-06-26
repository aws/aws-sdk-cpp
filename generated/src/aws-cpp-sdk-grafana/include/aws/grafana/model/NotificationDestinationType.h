/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{
  enum class NotificationDestinationType
  {
    NOT_SET,
    SNS
  };

namespace NotificationDestinationTypeMapper
{
AWS_MANAGEDGRAFANA_API NotificationDestinationType GetNotificationDestinationTypeForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForNotificationDestinationType(NotificationDestinationType value);
} // namespace NotificationDestinationTypeMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
