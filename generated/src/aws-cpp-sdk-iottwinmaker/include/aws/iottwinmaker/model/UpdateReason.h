/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{
  enum class UpdateReason
  {
    NOT_SET,
    DEFAULT,
    PRICING_TIER_UPDATE,
    ENTITY_COUNT_UPDATE,
    PRICING_MODE_UPDATE,
    OVERWRITTEN
  };

namespace UpdateReasonMapper
{
AWS_IOTTWINMAKER_API UpdateReason GetUpdateReasonForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForUpdateReason(UpdateReason value);
} // namespace UpdateReasonMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
