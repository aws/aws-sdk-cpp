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
  enum class ActionType
  {
    NOT_SET,
    CREATE_TASK,
    ASSIGN_CONTACT_CATEGORY,
    GENERATE_EVENTBRIDGE_EVENT,
    SEND_NOTIFICATION
  };

namespace ActionTypeMapper
{
AWS_CONNECT_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForActionType(ActionType value);
} // namespace ActionTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
