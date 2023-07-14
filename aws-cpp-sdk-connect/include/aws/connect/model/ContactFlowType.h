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
  enum class ContactFlowType
  {
    NOT_SET,
    CONTACT_FLOW,
    CUSTOMER_QUEUE,
    CUSTOMER_HOLD,
    CUSTOMER_WHISPER,
    AGENT_HOLD,
    AGENT_WHISPER,
    OUTBOUND_WHISPER,
    AGENT_TRANSFER,
    QUEUE_TRANSFER
  };

namespace ContactFlowTypeMapper
{
AWS_CONNECT_API ContactFlowType GetContactFlowTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactFlowType(ContactFlowType value);
} // namespace ContactFlowTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
