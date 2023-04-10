/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class BehaviorType
  {
    NOT_SET,
    ROUTE_CURRENT_CHANNEL_ONLY,
    ROUTE_ANY_CHANNEL
  };

namespace BehaviorTypeMapper
{
AWS_CONNECT_API BehaviorType GetBehaviorTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForBehaviorType(BehaviorType value);
} // namespace BehaviorTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
