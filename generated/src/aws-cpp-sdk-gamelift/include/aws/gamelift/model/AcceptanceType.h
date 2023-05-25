/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class AcceptanceType
  {
    NOT_SET,
    ACCEPT,
    REJECT
  };

namespace AcceptanceTypeMapper
{
AWS_GAMELIFT_API AcceptanceType GetAcceptanceTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForAcceptanceType(AcceptanceType value);
} // namespace AcceptanceTypeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
