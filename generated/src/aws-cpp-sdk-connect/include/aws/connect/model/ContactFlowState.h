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
  enum class ContactFlowState
  {
    NOT_SET,
    ACTIVE,
    ARCHIVED
  };

namespace ContactFlowStateMapper
{
AWS_CONNECT_API ContactFlowState GetContactFlowStateForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactFlowState(ContactFlowState value);
} // namespace ContactFlowStateMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
