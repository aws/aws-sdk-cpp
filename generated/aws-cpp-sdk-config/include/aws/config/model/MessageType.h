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
  enum class MessageType
  {
    NOT_SET,
    ConfigurationItemChangeNotification,
    ConfigurationSnapshotDeliveryCompleted,
    ScheduledNotification,
    OversizedConfigurationItemChangeNotification
  };

namespace MessageTypeMapper
{
AWS_CONFIGSERVICE_API MessageType GetMessageTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForMessageType(MessageType value);
} // namespace MessageTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
