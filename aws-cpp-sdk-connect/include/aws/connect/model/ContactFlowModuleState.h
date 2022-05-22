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
  enum class ContactFlowModuleState
  {
    NOT_SET,
    ACTIVE,
    ARCHIVED
  };

namespace ContactFlowModuleStateMapper
{
AWS_CONNECT_API ContactFlowModuleState GetContactFlowModuleStateForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactFlowModuleState(ContactFlowModuleState value);
} // namespace ContactFlowModuleStateMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
