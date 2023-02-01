/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class CampaignStatus
  {
    NOT_SET,
    CREATING,
    WAITING_FOR_APPROVAL,
    RUNNING,
    SUSPENDED
  };

namespace CampaignStatusMapper
{
AWS_IOTFLEETWISE_API CampaignStatus GetCampaignStatusForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForCampaignStatus(CampaignStatus value);
} // namespace CampaignStatusMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
