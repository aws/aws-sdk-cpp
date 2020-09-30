/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class CampaignStatus
  {
    NOT_SET,
    SCHEDULED,
    EXECUTING,
    PENDING_NEXT_RUN,
    COMPLETED,
    PAUSED,
    DELETED,
    INVALID
  };

namespace CampaignStatusMapper
{
AWS_PINPOINT_API CampaignStatus GetCampaignStatusForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForCampaignStatus(CampaignStatus value);
} // namespace CampaignStatusMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
