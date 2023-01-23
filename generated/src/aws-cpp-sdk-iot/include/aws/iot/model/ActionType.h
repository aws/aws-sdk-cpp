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
  enum class ActionType
  {
    NOT_SET,
    PUBLISH,
    SUBSCRIBE,
    RECEIVE,
    CONNECT
  };

namespace ActionTypeMapper
{
AWS_IOT_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForActionType(ActionType value);
} // namespace ActionTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
