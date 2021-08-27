/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class PublishingStatus
  {
    NOT_SET,
    PENDING_VERIFICATION,
    PUBLISHING,
    UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY,
    STOPPED
  };

namespace PublishingStatusMapper
{
AWS_GUARDDUTY_API PublishingStatus GetPublishingStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForPublishingStatus(PublishingStatus value);
} // namespace PublishingStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
