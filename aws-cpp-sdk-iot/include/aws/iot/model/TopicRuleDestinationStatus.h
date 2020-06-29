/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class TopicRuleDestinationStatus
  {
    NOT_SET,
    ENABLED,
    IN_PROGRESS,
    DISABLED,
    ERROR_
  };

namespace TopicRuleDestinationStatusMapper
{
AWS_IOT_API TopicRuleDestinationStatus GetTopicRuleDestinationStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForTopicRuleDestinationStatus(TopicRuleDestinationStatus value);
} // namespace TopicRuleDestinationStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
