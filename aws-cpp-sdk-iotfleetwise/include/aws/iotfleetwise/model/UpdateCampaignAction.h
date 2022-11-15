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
  enum class UpdateCampaignAction
  {
    NOT_SET,
    APPROVE,
    SUSPEND,
    RESUME,
    UPDATE
  };

namespace UpdateCampaignActionMapper
{
AWS_IOTFLEETWISE_API UpdateCampaignAction GetUpdateCampaignActionForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForUpdateCampaignAction(UpdateCampaignAction value);
} // namespace UpdateCampaignActionMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
