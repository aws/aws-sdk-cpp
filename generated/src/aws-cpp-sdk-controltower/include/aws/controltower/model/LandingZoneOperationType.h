/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ControlTower
{
namespace Model
{
  enum class LandingZoneOperationType
  {
    NOT_SET,
    DELETE_,
    CREATE,
    UPDATE,
    RESET
  };

namespace LandingZoneOperationTypeMapper
{
AWS_CONTROLTOWER_API LandingZoneOperationType GetLandingZoneOperationTypeForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForLandingZoneOperationType(LandingZoneOperationType value);
} // namespace LandingZoneOperationTypeMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
